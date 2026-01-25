// C Program to Reverse a Number Using for Loop
#include <stdio.h>
int main()
{
  int num, reversedNum = 0;

  // Input number from user
  printf("Enter an integer: ");
  scanf("%d", &num);

  // Reverse the number using for loop
  for (; num != 0; num /= 10)
  {
    int digit = num % 10;                   // Get the last digit
    reversedNum = reversedNum * 10 + digit; // Append digit
  }

  // Output the reversed number
  printf("Reversed Number: %d\n", reversedNum);
  return 0;
}