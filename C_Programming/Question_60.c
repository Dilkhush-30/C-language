#include <stdio.h>
int main()
{
  int Rows;
  printf("Enter the number of rows: ");
  scanf("%d", &Rows);

  char count = 'A';
  for (int i = 1; i <= Rows; i++)
  {
    for (int j = Rows; j > i; j--)
    {
      printf(" ");
    }
    for (int k = 1; k <= i; k++)
    {
      printf("%c ", count);
      count++;
    }
    printf("\n");
  }
  return 0;
}