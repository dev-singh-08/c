#include <stdio.h>

int main() {
    int n, i;
    int bt[100], wt[100], tat[100];
    int tWT = 0, tTAT = 0;
    float awt, atat;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        printf("Enter burst time of P%d: ", i + 1);
        scanf("%d", &bt[i]);
    }

    // First process has 0 waiting time (assuming arrival time = 0)
    wt[0] = 0;
    for (i = 1; i < n; ++i) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    for (i = 0; i < n; ++i) {
        tat[i] = wt[i] + bt[i];
        tWT += wt[i];
        tTAT += tat[i];
    }

    awt = (float)tWT / n;
    atat = (float)tTAT / n;

    printf("\nProcess\tBT\tWT\tTAT\n");
    for (i = 0; i < n; ++i) {
        printf("P%d\t%d\t%d\t%d\n", i + 1, bt[i], wt[i], tat[i]);
    }

    printf("\nTotal Waiting Time (tWT) = %d", tWT);
    printf("\nTotal Turnaround Time (tTAT) = %d", tTAT);
    printf("\nAverage Waiting Time = %.2f", awt);
    printf("\nAverage Turnaround Time = %.2f\n", atat);

    return 0;
}