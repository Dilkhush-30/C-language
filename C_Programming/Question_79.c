// Matrix Multiplication in C
#include <stdio.h>
#define MAX 10
int main()
{
  int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
  int row1, col1, row2, col2;

  // Input dimensions for the first matrix
  printf("Enter rows and columns for first matrix: ");
  scanf("%d %d", &row1, &col1);

  // Input dimensions for the second matrix
  printf("Enter rows and columns for second matrix: ");
  scanf("%d %d", &row2, &col2);

  // Check if multiplication is possible
  if (col1 != row2)
  {
    printf("Error! column of first matrix must be equal to row of second.\n");
    return 1;
  }

  // Input elements of the first matrix
  printf("Enter elements of first matrix:\n");
  for (int i = 0; i < row1; i++)
    for (int j = 0; j < col1; j++)
      scanf("%d", &mat1[i][j]);

  // Input elements of the second matrix
  printf("Enter elements of second matrix:\n");
  for (int i = 0; i < row2; i++)
    for (int j = 0; j < col2; j++)
      scanf("%d", &mat2[i][j]);

  // Initialize result matrix to zero
  for (int i = 0; i < row1; i++)
    for (int j = 0; j < col2; j++)
      result[i][j] = 0;

  // Perform matrix multiplication
  for (int i = 0; i < row1; i++)
    for (int j = 0; j < col2; j++)
      for (int k = 0; k < col1; k++)
        result[i][j] += mat1[i][k] * mat2[k][j];

  // Display the result
  printf("Resultant Matrix:\n");
  for (int i = 0; i < row1; i++)
  {
    for (int j = 0; j < col2; j++)
      printf("%d ", result[i][j]);
    printf("\n");
  }
  return 0;
}