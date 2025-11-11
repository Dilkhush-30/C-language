// A function that multiplies two matrices.
#include <stdio.h>
#define MAX 10
void multiply_matrices(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int row_first, int column_first, int row_second, int column_second)
{
  // Initialize the result matrix to zero
  for (int i = 0; i < row_first; i++)
    for (int j = 0; j < column_second; j++)
      result[i][j] = 0;

  // Multiply the matrices
  for (int i = 0; i < row_first; i++)
  {
    for (int j = 0; j < column_second; j++)
    {
      for (int k = 0; k < column_first; k++)
      {
        result[i][j] += first[i][k] * second[k][j];
      }
    }
  }
}
int main()
{
  int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];
  int row_first, column_first, row_second, column_second;

  printf("Enter rows and columns for first matrix: ");
  scanf("%d %d", &row_first, &column_first);

  printf("Enter rows and columns for second matrix: ");
  scanf("%d %d", &row_second, &column_second);

  // Check if multiplication is possible
  if (column_first != row_second)
  {
    printf("Error! column of first matrix must be equal to row of second.\n");
    return 1;
  }

  // Input first matrix
  printf("Enter elements of first matrix:\n");
  for (int i = 0; i < row_first; i++)
    for (int j = 0; j < column_first; j++)
      scanf("%d", &first[i][j]);

  // Input second matrix
  printf("Enter elements of second matrix:\n");
  for (int i = 0; i < row_second; i++)
    for (int j = 0; j < column_second; j++)
      scanf("%d", &second[i][j]);

  // Multiply the matrices
  multiply_matrices(first, second, result, row_first, column_first, row_second, column_second);

  // Display the result
  printf("Resultant Matrix:\n");
  for (int i = 0; i < row_first; i++)
  {
    for (int j = 0; j < column_second; j++)
    {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}