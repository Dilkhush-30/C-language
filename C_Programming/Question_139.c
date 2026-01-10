// Create a program to find the sum of two diagonal elements.
#include <stdio.h>
int main()
{
  int rows, cols, i, j;
  int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &cols);
  if (rows != cols)
  {
    printf("Error: Matrix must be square to calculate diagonal sums.\n");
    return 1;
  }
  int arr[rows][cols];
  printf("Enter %d elements in the matrix:\n", rows * cols);
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  for (i = 0; i < rows; i++)
  {
    primaryDiagonalSum += arr[i][i];
    secondaryDiagonalSum += arr[i][rows - i - 1];
  }
  printf("Sum of primary diagonal elements: %d\n", primaryDiagonalSum);
  printf("Sum of secondary diagonal elements: %d\n", secondaryDiagonalSum);
  return 0;
}