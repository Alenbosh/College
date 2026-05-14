import java.util.Arrays;

class Item {
    int value, weight;

    Item(int v, int w) {
        this.value = v;
        this.weight = w;
    }
}

public class KnapsackGreedy {
    public static void main(String[] args) {
        int W = 50;

        Item arr[] = {
                new Item(60, 10),
                new Item(100, 20),
                new Item(120, 30)
        };

        // Sort by value/weight ratio (descending)
        Arrays.sort(arr, (a, b) -> Double.compare((double) b.value / b.weight, (double) a.value / a.weight));

        int totalValue = 0;
        int currentWeight = 0;

        for (Item item : arr) {
            if (currentWeight + item.weight <= W) {
                currentWeight += item.weight;
                totalValue += item.value;
            }
        }

        System.out.println("Total Value (Greedy) = " + totalValue);
    }
}
