// Reverse an array arr[]. using two pointers
#include <stdio.h>
void reverseArray(int arr[], int n)
{
  int left = 0;
  int right = n - 1;
  while (left < right)
  {
    // Swap arr[left] and arr[right]
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    // Move the pointers
    left++;
    right--;
  }
}
int main()
{
  int arr[] = {1, 4, 3, 2, 6, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  reverseArray(arr, n);
  printf("Reversed array: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}