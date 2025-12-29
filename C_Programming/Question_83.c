#include <stdio.h>
int main()
{
  int arr1[5] = {1, 2, 3, 4, 5};
  int arr2[5] = {6, 7, 8, 9, 10};
  int merged[10];

  // Merge arrays
  for (int i = 0; i < 5; i++)
  {
    merged[i] = arr1[i];
  }

  for (int j = 0; j < 5; j++)
  {
    merged[5 + j] = arr2[j];
  }

  // Display arrays
  printf("First array:  ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", arr1[i]);
  }

  printf("\nSecond array: ");
  for (int j = 0; j < 5; j++)
  {
    printf("%d ", arr2[j]);
  }

  printf("\nMerged array: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", merged[i]);
  }
  return 0;
}