// Reverse Number Program in C Using Recursion
#include <stdio.h>
void reverseNumber(int num)
{
  // Base case: if num is 0, return
  if (num == 0)
    return;

  // Print the last digit
  printf("%d", num % 10);

  // Recursive call with the remaining number
  reverseNumber(num / 10);
}
int main()
{
  int num;

  // Input number from user
  printf("Enter an integer: ");
  scanf("%d", &num);

  // Output the reversed number
  printf("Reversed Number: ");
  reverseNumber(num);
  printf("\n");

  return 0;
}