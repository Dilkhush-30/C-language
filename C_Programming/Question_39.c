// Write a function that calculates the factorial of a given number.
#include <stdio.h>
int factorial(int n)
{
  if (n < 0)
    return -1; // Factorial is not defined for negative numbers
  if (n == 0 || n == 1)
    return 1;                  // Base case: factorial of 0 or 1 is 1
  return n * factorial(n - 1); // Recursive case
}
int main()
{
  int num;
  printf("Enter a number to calculate its factorial: ");
  scanf("%d", &num);
  int result = factorial(num);
  if (result == -1)
    printf("Factorial is not defined for negative numbers.\n");
  else
    printf("Factorial of %d is: %d\n", num, result);
  return 0;
}