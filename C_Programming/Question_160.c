/*Create an array using calloc and fill it with random numbers,
then use realloc to shrink the array size by half and print the
remaining numbers.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  int n, i;
  int *arr;

  // Seed the random number generator
  srand((unsigned int)time(NULL));

  // Input number of elements
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  // Dynamically allocate memory for n integers using calloc
  arr = (int *)calloc(n, sizeof(int));
  if (arr == NULL)
  {
    printf("Memory allocation failed\n");
    return 1;
  }

  // Fill the array with random numbers
  for (i = 0; i < n; i++)
  {
    arr[i] = rand() % 100; // Random numbers between 0 and 99
  }

  // Reallocate memory to shrink the array size by half
  int newSize = n / 2;
  int *temp = (int *)realloc(arr, newSize * sizeof(int));
  if (temp == NULL)
  {
    printf("Memory reallocation failed\n");
    free(arr); // Free the original array before exiting
    return 1;
  }
  arr = temp;

  // Print the remaining numbers
  printf("\nRemaining numbers after shrinking the array:\n");
  for (i = 0; i < newSize; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // Free allocated memory
  free(arr);
  return 0;
}