// Finding the Greatest Common Divisor (GCD)
#include <stdio.h>
// User-defined function to find GCD using Euclidean algorithm
int gcd(int a, int b)
{
  if (b == 0)
    return a;           // Base case
  return gcd(b, a % b); // Recursive case
}
int main()
{
  int num1 = 48, num2 = 18;
  printf("GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));
  return 0;
}