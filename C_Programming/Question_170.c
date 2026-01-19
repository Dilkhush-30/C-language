// Array Reversal in C Using Temporary Array
#include <stdio.h>

int main()
{
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  int arr[n], temp[n];
  printf("Enter %d elements: ", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  // Copy elements in reverse order to a temporary array
  for (int i = 0; i < n; i++)
  {
    temp[i] = arr[n - i - 1];
  }

  // Copy back to the original array
  for (int i = 0; i < n; i++)
  {
    arr[i] = temp[i];
  }

  printf("Reversed array: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}