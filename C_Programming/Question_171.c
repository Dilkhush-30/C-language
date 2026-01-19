// Sum of Natural Numbers in C Using for Loop
#include <stdio.h>
int main()
{
  int n, sum = 0;

  // Ask the user for input
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // Calculate the sum of natural numbers using a for loop
  for (int i = 1; i <= n; ++i)
  {
    sum += i;
  }

  // Display the result
  printf("Sum of natural numbers from 1 to %d is: %d\n", n, sum);

  return 0;
}