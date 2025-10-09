// Create a program to sum all odd numbers from 1 to a specified number N.
#include <stdio.h>
int main()
{
  int N, i, sum = 0;
  printf("Enter a number N: ");
  scanf("%d", &N);
  for (i = 1; i <= N; i += 2)
  {
    if (i % 2 != 0)
    {
      sum += i;
    }
  }
  printf("Sum of all odd numbers from 1 to %d is: %d\n", N, sum);
  return 0;
}