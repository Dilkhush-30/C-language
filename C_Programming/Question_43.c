// Create a program that computes the sum of the digits of an integer.
#include <stdio.h>
int main()
{
  int num, sum = 0, digit;
  printf("Enter an integer: ");
  scanf("%d", &num);
  // Make sure to handle negative numbers
  if (num < 0)
    num = -num;
  while (num != 0)
  {
    digit = num % 10; // Get the last digit
    sum += digit;     // Add it to the sum
    num /= 10;        // Remove the last digit
  }
  printf("Sum of the digits is: %d\n", sum);
  return 0;
}