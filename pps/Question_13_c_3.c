// Write a C program to find the palindrome number using recursion.
#include <stdio.h>
int isPalindrome(int n, int reversedNumber)
{
  if (n == 0)
    return reversedNumber;
  reversedNumber = reversedNumber * 10 + n % 10;
  return isPalindrome(n / 10, reversedNumber);
}
int main()
{
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);
  if (n == isPalindrome(n, 0))
    printf("%d is a palindrome.", n);
  else
    printf("%d is not a palindrome.", n);
  return 0;
}