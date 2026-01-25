// Reverse Number Program in C Without Using Temporary Variable
#include <stdio.h>
int main()
{
  int num, reversedNum = 0;

  // Input number from user
  printf("Enter an integer: ");
  scanf("%d", &num);

  // Reverse the number without using a temporary variable
  while (num != 0)
  {
    reversedNum = reversedNum * 10 + num % 10; // Append last digit
    num /= 10;                                 // Remove last digit
  }

  // Output the reversed number
  printf("Reversed Number: %d\n", reversedNum);
  return 0;
}