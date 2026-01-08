/* Write a program to demonstrate the difference in range between
long and long long by calculating the factorial of 20. */
#include <stdio.h>
int main()
{
  long long factorial = 1;
  int i;
  for (i = 1; i <= 20; i++)
  {
    factorial *= i;
  }
  printf("Factorial of 20 is: %lld\n", factorial);
  return 0;
}