// Write a C program to find the sum of n natural numbers using function.
#include <stdio.h>
int sumOfNaturalNumbers(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; ++i)
  {
    sum += i;
  }
  return sum;
}
int main()
{
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  printf("Sum of first %d natural numbers = %d", n, sumOfNaturalNumbers(n));
  return 0;
}