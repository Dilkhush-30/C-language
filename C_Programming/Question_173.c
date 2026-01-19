// C Program for Sum of n Natural Numbers Using Recursion
#include <stdio.h>
int sumOfNaturalNumbers(int n)
{
  // Base case
  if (n == 1)
    return 1;
  // Recursive case
  return n + sumOfNaturalNumbers(n - 1);
}
int main()
{
  int n;

  // Ask the user for input
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // Calculate the sum of natural numbers using recursion
  int sum = sumOfNaturalNumbers(n);

  // Display the result
  printf("Sum of natural numbers from 1 to %d is: %d\n", n, sum);

  return 0;
}