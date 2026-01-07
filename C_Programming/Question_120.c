// Create a program using recursion to check if a number is a palindrome using recursion.
#include <stdio.h>
int is_palindrome(int num, int reversed)
{
  if (num == 0)
    return reversed == num;
  return is_palindrome(num / 10, reversed * 10 + num % 10);
}
int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  if (is_palindrome(number, 0))
    printf("%d is a palindrome.\n", number);
  else
    printf("%d is not a palindrome.\n", number);

  return 0;
}