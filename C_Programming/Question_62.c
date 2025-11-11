/*  1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/
#include <stdio.h>
int main()
{
  int i = 1, j;
  printf("Number Pyramid:\n");
  // Outer loop for rows
  while (i <= 5)
  {
    j = 1;
    // Inner loop for columns
    while (j <= i)
    {
      printf("%d ", j);
      j++;
    }
    printf("\n");
    i++;
  }
  return 0;
}