// Write a C program to find the palindrome number using for loop.
#include <stdio.h>
int main()
{
  int n, reversedNumber = 0, remainder, originalNumber;
  printf("Enter an integer: ");
  scanf("%d", &n);
  originalNumber = n;
  for (; n != 0; n /= 10)
  {
    remainder = n % 10;
    reversedNumber = reversedNumber * 10 + remainder;
  }
  if (originalNumber == reversedNumber)
    printf("%d is a palindrome.", originalNumber);
  else
    printf("%d is not a palindrome.", originalNumber);
  return 0;
}