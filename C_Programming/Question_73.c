// A function to Searching in a 2D Array in run time
#include <stdio.h>
#include <stdlib.h>
// User-defined function to search for a target value in a 2D array
int search2D(int rows, int cols, int **matrix, int target)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (matrix[i][j] == target)
        return 1; // Target found
    }
  }
  return 0; // Target not found
}
int main()
{
  int rows = 3, cols = 3;
  // Dynamically allocate memory for a 2D array
  int **matrix = (int **)malloc(rows * sizeof(int *));
  for (int i = 0; i < rows; i++)
  {
    matrix[i] = (int *)malloc(cols * sizeof(int));
  }
  // Initialize the matrix
  int count = 1;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      matrix[i][j] = count++;
    }
  }

  int target = 5;
  if (search2D(rows, cols, matrix, target))
    printf("Element %d found in the matrix.\n", target);
  else
    printf("Element %d not found in the matrix.\n", target);

  // Free allocated memory
  for (int i = 0; i < rows; i++)
  {
    free(matrix[i]);
  }
  free(matrix);

  return 0;
}