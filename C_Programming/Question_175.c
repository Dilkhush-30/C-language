// Sum of Natural Numbers in C Using Functions (Iterative)
#include <stdio.h>
int sumOfNaturalNumbers(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; ++i)
  {
    sum += i;
  }
  return sum;
}
int main()
{
  int n;

  // Ask the user for input
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // Calculate the sum of natural numbers using the function
  int sum = sumOfNaturalNumbers(n);

  // Display the result
  printf("Sum of natural numbers from 1 to %d is: %d\n", n, sum);

  return 0;
}