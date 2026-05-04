import java.util.Random;

public class QuickSortExperiment {

    // Quick Sort function
    public static void quickSort(int[] arr, int low, int high) {
        if (low < high) {
            int pivotIndex = partition(arr, low, high);

            quickSort(arr, low, pivotIndex - 1);   // Left
            quickSort(arr, pivotIndex + 1, high); // Right
        }
    }

    // Partition function
    public static int partition(int[] arr, int low, int high) {
        int pivot = arr[high]; // choosing last element as pivot
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;

                // swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // place pivot in correct position
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        return i + 1;
    }

    // Generate random array
    public static int[] generateRandomArray(int n) {
        Random rand = new Random();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = rand.nextInt(100000);
        }

        return arr;
    }

    public static void main(String[] args) {
        int[] sizes = {5000, 10000, 20000, 40000, 80000};

        for (int n : sizes) {
            int[] arr = generateRandomArray(n);

            long startTime = System.nanoTime();

            quickSort(arr, 0, arr.length - 1);

            long endTime = System.nanoTime();

            long timeTaken = (endTime - startTime) / 1000000; // ms

            System.out.println("n = " + n + " -> Time = " + timeTaken + " ms");
        }
    }
}
