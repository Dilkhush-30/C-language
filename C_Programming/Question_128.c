/* Create a program to find the sum and average of all elements in an array. */
#include <stdio.h>
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  int sum = 0;
  double average;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  average = (double)sum / size;
  printf("Sum: %d\n", sum);
  printf("Average: %.2f\n", average);
  return 0;
}