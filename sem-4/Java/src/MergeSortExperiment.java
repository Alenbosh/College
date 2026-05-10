import java.util.Random;

public class MergeSortExperiment {

    // Merge Sort function
    public static void mergeSort(int[] arr, int left, int right) {
        if (left < right) {

            int mid = (left + right) / 2;

            // Divide
            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);

            // Conquer (merge)
            merge(arr, left, mid, right);
        }
    }

    // Merge function
    public static void merge(int[] arr, int left, int mid, int right) {

        int n1 = mid - left + 1;
        int n2 = right - mid;

        int[] L = new int[n1];
        int[] R = new int[n2];

        // Copy data
        for (int i = 0; i < n1; i++)
            L[i] = arr[left + i];

        for (int j = 0; j < n2; j++)
            R[j] = arr[mid + 1 + j];

        // Merge arrays
        int i = 0, j = 0, k = left;

        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }

        // Remaining elements
        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }

        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }

    public static void main(String[] args) {

        int[] sizes = { 5000, 10000, 20000, 40000, 80000 };

        for (int n : sizes) {
            int[] arr = generateRandomArray(n);

            long startTime = System.nanoTime();

            mergeSort(arr, 0, arr.length - 1);

            long endTime = System.nanoTime();

            long timeTaken = (endTime - startTime) / 1000000; // ms

            System.out.println("n = " + n + " -> Time = " + timeTaken + " ms");
        }
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
}
