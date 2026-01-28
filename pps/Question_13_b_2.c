// Write a C program to find the factorial using function.
#include <stdio.h>
unsigned long long factorial(int n)
{
  unsigned long long fact = 1;
  for (int i = 1; i <= n; ++i)
  {
    fact *= i;
  }
  return fact;
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