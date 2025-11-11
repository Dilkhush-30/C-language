// Sum of Digits in a Number
#include <stdio.h>
int main()
{
  int num, sum = 0, digit;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  int temp = (num < 0) ? -num : num; // Handle negative input

  while (temp != 0)
  {
    digit = temp % 10; // Extract the last digit
    sum += digit;      // Add it to the sum
    temp /= 10;        // Remove the last digit
  }
  printf("Sum of digits: %d\n", sum);
  return 0;
}