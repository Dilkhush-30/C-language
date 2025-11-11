/*        1
        2 1 2
      3 2 1 2 3
    4 3 2 1 2 3 4
*/
#include <stdio.h>
int main()
{
  for (int i = 1; i <= 4; i++)
  {
    for (int j = 4; j > i; j--)
    {
      printf(" ");
    }
    for (int k = i; k >= 1; k--)
    {
      printf("%d ", k);
    }
    for (int l = 2; l <= i; l++)
    {
      printf("%d ", l);
    }
    printf("\n");
  }
  return 0;
}