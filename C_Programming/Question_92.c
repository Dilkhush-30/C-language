#include <stdio.h>
struct Process
{
  int id;
  int arrival_time;
  int burst_time;
  int completion_time;
  int turnaround_time;
  int waiting_time;
};

void calculateTimes(struct Process processes[], int n)
{
  int current_time = 0;

  for (int i = 0; i < n; i++)
  {
    if (current_time < processes[i].arrival_time)
    {
      current_time = processes[i].arrival_time;
    }

    processes[i].completion_time = current_time + processes[i].burst_time;
    processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;
    processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time;

    current_time = processes[i].completion_time;
  }
}

void displayResults(struct Process processes[], int n)
{
  float avg_tat = 0, avg_wt = 0;

  printf("\nProcess\tAT\tBT\tCT\tTAT\tWT\n");
  printf("----------------------------------------------\n");

  for (int i = 0; i < n; i++)
  {
    printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
           processes[i].id,
           processes[i].arrival_time,
           processes[i].burst_time,
           processes[i].completion_time,
           processes[i].turnaround_time,
           processes[i].waiting_time);

    avg_tat += processes[i].turnaround_time;
    avg_wt += processes[i].waiting_time;
  }

  printf("\nAverage Turnaround Time: %.2f", avg_tat / n);
  printf("\nAverage Waiting Time: %.2f\n", avg_wt / n);
}

int main()
{
  int n;

  printf("Enter the number of processes: ");
  scanf("%d", &n);

  struct Process processes[n];

  printf("\nEnter process details:\n");
  for (int i = 0; i < n; i++)
  {
    printf("\nProcess %d:\n", i + 1);
    processes[i].id = i + 1;

    printf("Arrival Time: ");
    scanf("%d", &processes[i].arrival_time);

    printf("Burst Time: ");
    scanf("%d", &processes[i].burst_time);
  }

  calculateTimes(processes, n);
  displayResults(processes, n);

  return 0;
}