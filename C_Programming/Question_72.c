// A function to Searching in a 2D Array
#include <stdio.h>
// User-defined function to search for a target value in a 2D array
int search2D(int rows, int cols, int matrix[rows][cols], int target)
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
  int matrix[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};
  int target = 5;
  if (search2D(3, 3, matrix, target))
    printf("Element %d found in the matrix.\n", target);
  else
    printf("Element %d not found in the matrix.\n", target);
  return 0;
}