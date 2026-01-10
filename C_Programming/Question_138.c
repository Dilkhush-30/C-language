// Create a program to do sum and average of all elements in a 2-array.
#include <stdio.h>
int main()
{
  int rows, cols, i, j;
  int sum = 0;
  float average;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &cols);
  int arr[rows][cols];
  printf("Enter %d elements in the 2-D array:\n", rows * cols);
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      scanf("%d", &arr[i][j]);
      sum += arr[i][j];
    }
  }
  average = (float)sum / (rows * cols);
  printf("Sum of all elements: %d\n", sum);
  printf("Average of all elements: %.2f\n", average);
  return 0;
}