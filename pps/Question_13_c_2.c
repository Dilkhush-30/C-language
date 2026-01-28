// Write a C program to find the palindrome number using function.
#include <stdio.h>
int isPalindrome(int n)
{
  int reversedNumber = 0, remainder, originalNumber;
  originalNumber = n;
  for (; n != 0; n /= 10)
  {
    remainder = n % 10;
    reversedNumber = reversedNumber * 10 + remainder;
  }
  return originalNumber == reversedNumber;
}
int main()
{
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);
  if (isPalindrome(n))
    printf("%d is a palindrome.", n);
  else
    printf("%d is not a palindrome.", n);
  return 0;
}