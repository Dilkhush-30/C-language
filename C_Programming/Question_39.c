// Write a function that calculates the factorial of a given number.
#include <stdio.h>
// Recursive version
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
/*
factorial_recursive(5)
→ 5 × factorial_recursive(4)
→ 5 × (4 × factorial_recursive(3))
→ 5 × (4 × (3 × factorial_recursive(2)))
→ 5 × (4 × (3 × (2 × factorial_recursive(1))))
→ 5 × (4 × (3 × (2 × 1)))
→ 5 × (4 × (3 × 2))
→ 5 × (4 × 6)
→ 5 × 24
→ 120
*/