#include <stdio.h>

int main() {
  int n, i, j, temp;

  int at[10], bt[10], wt[10], tat[10], ct[10];
  int done[10];

  float avgwt = 0, avgtat = 0;

  // Step 1: Input
  printf("Enter number of processes: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Enter Arrival Time and Burst Time for P%d: ", i + 1);
    scanf("%d %d", &at[i], &bt[i]);
    done[i] = 0;
  }

  // Step 2: SJF Scheduling
  int time = 0, completed = 0;

  while (completed < n) {

    // Find shortest job among arrived processes
    int min = 9999, sel = -1;

    for (i = 0; i < n; i++) {
      if (done[i] == 0 && at[i] <= time && bt[i] < min) {
        min = bt[i];
        sel = i;
      }
    }

    // If no process arrived, increase time
    if (sel == -1) {
      time++;
      continue;
    }

    // Process selected process
    time = time + bt[sel];

    ct[sel] = time;
    tat[sel] = ct[sel] - at[sel];
    wt[sel] = tat[sel] - bt[sel];

    done[sel] = 1;
    completed++;
  }

  // Step 3: Display Output
  printf("\nP\tAT\tBT\tCT\tWT\tTAT\n");
  printf("-----------------------------------\n");

  for (i = 0; i < n; i++) {
    printf("P%d\t%d\t%d\t%d\t%d\t%d\n", i + 1, at[i], bt[i], ct[i], wt[i],
           tat[i]);

    avgwt += wt[i];
    avgtat += tat[i];
  }

  printf("-----------------------------------\n");

  printf("Average Waiting Time = %.2f\n", avgwt / n);
  printf("Average Turnaround Time = %.2f\n", avgtat / n);

  return 0;
}
