// Write a C program to find the GCD of two number using function.
#include <stdio.h>
int gcd(int n1, int n2)
{
  int gcd;
  for (int i = 1; i <= n1 && i <= n2; ++i)
  {
    if (n1 % i == 0 && n2 % i == 0)
      gcd = i;
  }
  return gcd;
}
int main()
{
  int n1, n2;
  printf("Enter two positive integers: ");
  scanf("%d %d", &n1, &n2);
  printf("GCD of %d and %d is %d", n1, n2, gcd(n1, n2));
  return 0;
}