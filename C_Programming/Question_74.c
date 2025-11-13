// Fibonacci Series
#include <stdio.h>
int main()
{
  int num, i, a = 0, b = 1, c;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Fibonacci Series: ");
  for (i = 1; i <= num; i++)
  {
    if (i == 1)
    {
      printf("%d ", a);
      continue;
    }
    if (i == 2)
    {
      printf("%d ", b);
      continue;
    }
    c = a + b;
    a = b;
    b = c;
    printf("%d ", c);
  }
  return 0;
}