// Reverse Number Program in C Using while Loop
#include <stdio.h>
int main()
{
  int num, reversedNum = 0;

  // Input number from user
  printf("Enter an integer: ");
  scanf("%d", &num);

  // Reverse the number using while loop
  while (num != 0)
  {
    int digit = num % 10;                   // Get the last digit
    reversedNum = reversedNum * 10 + digit; // Append digit
    num /= 10;                              // Remove the last digit
  }

  // Output the reversed number
  printf("Reversed Number: %d\n", reversedNum);
  return 0;
}