/* Given an array, arr[] of n integers, and an integer element x,
find whether element x is present in the array. Return the index
of the first occurrence of x in the array, or -1 if it doesn't exist.
1 ≤ arr.size ≤ 106
0 ≤ arr[i] ≤ 106
0 ≤ x ≤ 105 */
#include <stdio.h>
int search(int arr[], int n, int x)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == x)
    {
      return i; // Return the index of the first occurrence
    }
  }
  return -1; // Element not found
}
int main()
{
  int arr[] = {1, 4, 3, 2, 6, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 3; // Element to search for
  int result = search(arr, n, x);
  if (result != -1)
  {
    printf("Element %d found at index: %d\n", x, result);
  }
  else
  {
    printf("Element %d not found in the array.\n", x);
  }
  return 0;
}