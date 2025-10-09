// Create a program to find the Least Common Multiple (LCM) of two numbers.
#include <stdio.h>
int gcd(int a, int b)
{
  while (b != 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}
int main()
{
  int num1, num2, lcm;
  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2);
  if (num1 == 0 || num2 == 0)
  {
    printf("LCM is not defined for zero.\n");
    return 0;
  }
  int gcd_value = gcd(num1, num2);
  lcm = (num1 / gcd_value) * num2; // Calculate LCM using GCD
  printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
  return 0;
}