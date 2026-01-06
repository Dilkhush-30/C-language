// Create a program to reverse the digits of a number.
#include <stdio.h>
int main()
{
  int num, reversedNum = 0, remainder;
  printf("Enter an integer: ");
  scanf("%d", &num);

  while (num != 0)
  {
    remainder = num % 10;                       // Get the last digit
    reversedNum = reversedNum * 10 + remainder; // Append it to the reversed number
    num /= 10;                                  // Remove the last digit from the original number
  }

  printf("Reversed Number: %d\n", reversedNum);
  return 0;
}