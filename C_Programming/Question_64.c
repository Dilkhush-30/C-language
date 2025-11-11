#include <stdio.h>

// Recursive version
int factorial_recursive(int n)
{
  if (n < 0)
    return -1;
  if (n == 0 || n == 1)
    return 1;
  return n * factorial_recursive(n - 1);
}
// Iterative version
int factorial_iterative(int n)
{
  if (n < 0)
    return -1;

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

  int result_recursive = factorial_recursive(num);
  int result_iterative = factorial_iterative(num);

  if (result_recursive == -1)
  {
    printf("Factorial is not defined for negative numbers.\n");
  }
  else
  {
    printf("Recursive: Factorial of %d is: %d\n", num, result_recursive);
    printf("Iterative: Factorial of %d is: %d\n", num, result_iterative);
  }

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

/* result = 1
i=2: result = 1 × 2 = 2
i=3: result = 2 × 3 = 6
i=4: result = 6 × 4 = 24
i=5: result = 24 × 5 = 120 */