// Write a C program to find the sum of n natural numbers using recursion.
#include <stdio.h>
int sumOfNaturalNumbers(int n)
{
  if (n == 0)
    return 0;
  return n + sumOfNaturalNumbers(n - 1);
}
int main()
{
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  printf("Sum of first %d natural numbers = %d", n, sumOfNaturalNumbers(n));
  return 0;
}