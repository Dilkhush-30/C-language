// W.A.P in c to reverse the given array by using auxiliary array.
#include <stdio.h>
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  int reversedArr[size];

  for (int i = 0; i < size; i++)
  {
    reversedArr[i] = arr[size - 1 - i];
  }

  printf("Reversed array: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", reversedArr[i]);
  }
  return 0;
}