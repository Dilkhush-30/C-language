// Given an array arr[]. The task is to find the largest element and return it.
/* 1 <= arr.size()<= 106
0 <= arr[i] <= 106 */
#include <stdio.h>
int largest(int arr[], int n)
{
  int max = arr[0]; // Assume first element is the largest
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i]; // Update max if current element is larger
    }
  }
  return max;
}
int main()
{
  int arr[] = {1, 4, 3, 2, 6, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int maxElement = largest(arr, n);
  printf("Largest element in the array: %d\n", maxElement);
  return 0;
}