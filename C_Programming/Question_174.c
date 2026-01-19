// Sum of n Natural Number in C Using Formula
#include <stdio.h>
int main()
{
  int n;

  // Ask the user for input
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // Calculate the sum of natural numbers using the formula n(n + 1) / 2
  int sum = n * (n + 1) / 2;

  // Display the result
  printf("Sum of natural numbers from 1 to %d is: %d\n", n, sum);

  return 0;
}