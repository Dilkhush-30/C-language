// W.A.P in c reverse any given array and add it with the previous number.
#include <stdio.h>
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  int reversedArr[size];

  // Reverse the array
  for (int i = 0; i < size; i++)
  {
    reversedArr[i] = arr[size - 1 - i];
  }

  // Add reversed array elements to original array elements
  int resultArr[size];
  for (int i = 0; i < size; i++)
  {
    resultArr[i] = arr[i] + reversedArr[i];
  }

  // Print the result array
  printf("Resultant array after adding original and reversed arrays: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", resultArr[i]);
  }
  return 0;
}