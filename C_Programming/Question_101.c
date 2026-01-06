// Create a program to verify if a number is a palindrome.
#include <stdio.h>
int is_palindrome(int num)
{
  int reversed = 0, original = num;
  while (num > 0)
  {
    reversed = reversed * 10 + num % 10;
    num /= 10;
  }
  return original == reversed;
}
int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  if (is_palindrome(number))
  {
    printf("%d is a palindrome.\n", number);
  }
  else
  {
    printf("%d is not a palindrome.\n", number);
  }
  return 0;
}