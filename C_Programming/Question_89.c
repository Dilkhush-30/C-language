#include <stdio.h>
int main()
{
  int rows = 2, columns = 3;
  int matrix[2][3];

  printf("Enter 6 elements for 2x3 matrix:\n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      printf("matrix[%d][%d]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }
  printf("\nMatrix elements are:\n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n"); // new line after each row
  }
  return 0;
}