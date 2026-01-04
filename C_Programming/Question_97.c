// Array Reverse in C
#include <stdio.h>
#define MAX_SIZE 100
void reverseArray(int arr[], int n)
{
  int start = 0;
  int end = n - 1;
  while (start < end)
  {
    // Swap arr[start] and arr[end]
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Move towards middle
    start++;
    end--;
  }
}
int main()
{
  int arr[MAX_SIZE];
  int n;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  reverseArray(arr, n);

  printf("Reversed array:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}