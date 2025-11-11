#include <stdio.h>
// Iterative version
int factorial_iterative(int n)
{
  if (n < 0)
    return -1; // Factorial is not defined for negative numbers
  int result = 1;
  for (int i = 2; i <= n; i++)
  {
    result *= i;
  }
  return result;
}
int main()
{
  int num;
  printf("Enter a number to calculate its factorial: ");
  scanf("%d", &num);

  int result_iterative = factorial_iterative(num);

  if (result_iterative == -1)
  {
    printf("Factorial is not defined for negative numbers.\n");
  }
  else
  {
    printf("Iterative: Factorial of %d is: %d\n", num, result_iterative);
  }
  return 0;
}
/* result = 1
i=2: result = 1 × 2 = 2
i=3: result = 2 × 3 = 6
i=4: result = 6 × 4 = 24
i=5: result = 24 × 5 = 120 */