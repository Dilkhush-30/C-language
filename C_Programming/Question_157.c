/*Create a program that uses malloc to dynamically allocate an
array for a specified number of float values entered by the
user and then stores user-entered numbers into it. */
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, i;
  float *arr;

  // Input number of float values
  printf("Enter the number of float values: ");
  scanf("%d", &n);

  // Dynamically allocate memory for n float values
  arr = (float *)malloc(n * sizeof(float));
  if (arr == NULL)
  {
    printf("Memory allocation failed\n");
    return 1;
  }

  // Input float values
  printf("Enter %d float values:\n", n);
  for (i = 0; i < n; i++)
  {
    printf("Value %d: ", i + 1);
    scanf("%f", &arr[i]);
  }

  // Display the entered float values
  printf("\nYou entered the following float values:\n");
  for (i = 0; i < n; i++)
  {
    printf("Value %d: %.2f\n", i + 1, arr[i]);
  }

  // Free allocated memory
  free(arr);
  return 0;
}