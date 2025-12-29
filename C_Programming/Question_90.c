// How to Find Length of Array in C (Multi-Dimensional)
#include <stdio.h>
int main()
{
  int matrix[3][4];

  int totalSize = sizeof(matrix);         // 3 * 4 * 4 = 48 bytes (if int = 4 bytes)
  int rowSize = sizeof(matrix[0]);        // 4 * 4 = 16 bytes
  int elementSize = sizeof(matrix[0][0]); // 4 bytes

  int rows = sizeof(matrix) / sizeof(matrix[0]);          // 48/16 =3
  int columns = sizeof(matrix[0]) / sizeof(matrix[0][0]); // 16/4 =4
  int totalElements = rows * columns;

  printf("Rows: %d\n", rows);
  printf("Columns: %d\n", columns);
  printf("Total Elements: %d\n", totalElements);

  return 0;
}