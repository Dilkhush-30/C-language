// W.A.P in c to reverse the given array without using auxiliary array.
#include <stdio.h>
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < size / 2; i++)
  {
    int temp = arr[i];
    arr[i] = arr[size - 1 - i];
    arr[size - 1 - i] = temp;
  }

  printf("Reversed array: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}