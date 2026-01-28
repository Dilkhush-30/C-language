// Write a C program to find the factorial using recursion.
#include <stdio.h>
unsigned long long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return n * factorial(n - 1);
}
int main()
{
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  if (n < 0)
    printf("Error! Factorial of a negative number doesn't exist.");
  else
  {
    printf("Factorial of %d = %llu", n, factorial(n));
  }
  return 0;
}