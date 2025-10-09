// Create a program to find factorial of a given number
#include <stdio.h>
int main()
{
  int num, i;
  unsigned long long factorial = 1;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  for (i = 1; i <= num; ++i)
  {
    factorial *= i; // factorial = factorial * i;
  }
  printf("Factorial of %d = %llu\n", num, factorial);
  return 0;
}
