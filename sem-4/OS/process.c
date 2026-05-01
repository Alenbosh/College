#include <stdio.h>

int main() {
  int n, i, j;

  printf("Enter no of processes: ");
  scanf("%d", &n);

  int at[n], bt[n], ct[n], tat[n], wt[n];

  // Input Arrival Time
  printf("Enter Arrival Time:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &at[i]);
  }

  // Input Burst Time
  printf("Enter Burst Time:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &bt[i]);
  }

  // Sorting according to Arrival Time
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (at[i] > at[j]) {
        int temp;

        temp = at[i];
        at[i] = at[j];
        at[j] = temp;

        temp = bt[i];
        bt[i] = bt[j];
        bt[j] = temp;
      }
    }
  }

  // Completion Time
  ct[0] = at[0] + bt[0];

  for (i = 1; i < n; i++) {
    if (ct[i - 1] < at[i]) {
      ct[i] = at[i] + bt[i];
    } else {
      ct[i] = ct[i - 1] + bt[i];
    }
  }

  // TAT and WT
  for (i = 0; i < n; i++) {
    tat[i] = ct[i] - at[i];
    wt[i] = tat[i] - bt[i];
  }

  // Output
  printf("\nP\tAT\tBT\tCT\tTAT\tWT\n");

  for (i = 0; i < n; i++) {
    printf("P%d\t%d\t%d\t%d\t%d\t%d\n", i + 1, at[i], bt[i], ct[i], tat[i],
           wt[i]);
  }

  return 0;
}
