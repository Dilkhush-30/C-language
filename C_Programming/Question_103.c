// Create a program to verify if a number is a palindrome using recurssion.
#include <stdio.h>
int is_palindrome_recursive(int num, int *reversed)
{
  if (num == 0)
    return 1;

  int digit = num % 10;
  *reversed = *reversed * 10 + digit;

  return is_palindrome_recursive(num / 10, reversed);
}
int main()
{
  int number, reversed = 0;
  printf("Enter a number: ");
  scanf("%d", &number);
  int original = number;

  is_palindrome_recursive(number, &reversed);

  if (original == reversed)
  {
    printf("%d is a palindrome.\n", original);
  }
  else
  {
    printf("%d is not a palindrome.\n", original);
  }
  return 0;
}