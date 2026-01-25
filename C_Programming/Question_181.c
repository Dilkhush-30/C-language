// C Program to Reverse a Number Using Function
#include <stdio.h>
int reverseNumber(int num)
{
  int reversedNum = 0;

  // Reverse the number using while loop
  while (num != 0)
  {
    int digit = num % 10;                   // Get the last digit
    reversedNum = reversedNum * 10 + digit; // Append digit
    num /= 10;                              // Remove the last digit
  }

  return reversedNum;
}
int main()
{
  int num;

  // Input number from user
  printf("Enter an integer: ");
  scanf("%d", &num);

  // Call the function to reverse the number
  int reversedNum = reverseNumber(num);

  // Output the reversed number
  printf("Reversed Number: %d\n", reversedNum);
  return 0;
}