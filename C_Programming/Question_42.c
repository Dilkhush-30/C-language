// Create a program that computes the sum of the digits of an integer.
#include <stdio.h>
int main()
{
  int num, sum = 0, digit;
  printf("Enter an integer: ");
  scanf("%d", &num);
  for (; num != 0; num /= 10)
  {
    digit = num % 10; // Extract the last digit
    sum += digit;     // Add the digit to sum
  }
  printf("Sum of the digits is: %d\n", sum);
  return 0;
}