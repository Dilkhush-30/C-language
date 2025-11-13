//  Searching in a 2D Array in run time
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int rows, cols, target, found = 0;
  printf("Enter number of rows and columns: ");
  scanf("%d %d", &rows, &cols);

  // Dynamically allocate memory for a 2D array
  int **matrix = (int **)malloc(rows * sizeof(int *));
  for (int i = 0; i < rows; i++)
  {
    matrix[i] = (int *)malloc(cols * sizeof(int));
  }

  // Input elements of the matrix
  printf("Enter elements of the matrix:\n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("Enter the target value to search: ");
  scanf("%d", &target);

  // Search for the target value in the matrix
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (matrix[i][j] == target)
      {
        found = 1;
        break;
      }
    }
    if (found)
      break;
  }

  if (found)
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
