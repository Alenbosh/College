#include <stdio.h>

int main() {
  int n, i, j;

  printf("Enter no of processes: ");
  scanf("%d", &n);

  int at[n], bt[n], ct[n], tat[n], wt[n], completed[n];
  int p[n];

  // Input Arrival Time
  printf("Enter Arrival Time:");
  for (i = 0; i < n; i++) {
    scanf("%d", &at[i]);
    p[i] = i + 1;
    completed[i] = 0;
  }

  // Input Burst Time
  printf("Enter Burst Time:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &bt[i]);
  }

  int currentTime = 0, done = 0;

  while (done < n) {
    int idx = -1;
    int minBT = 9999;

    // Find process with minimum burst time
    // among arrived processes
    for (i = 0; i < n; i++) {
      if (at[i] <= currentTime && completed[i] == 0) {
        if (bt[i] < minBT) {
          minBT = bt[i];
          idx = i;
        }
      }
    }

    // If no process has arrived yet
    if (idx == -1) {
      currentTime++;
    } else {
      currentTime += bt[idx];
      ct[idx] = currentTime;

      tat[idx] = ct[idx] - at[idx];
      wt[idx] = tat[idx] - bt[idx];

      completed[idx] = 1;
      done++;
    }
  }

  // Output
  printf("\nP\tAT\tBT\tCT\tTAT\tWT\n");

  for (i = 0; i < n; i++) {
    printf("P%d\t%d\t%d\t%d\t%d\t%d\n", p[i], at[i], bt[i], ct[i], tat[i],
           wt[i]);
  }

  return 0;
}
