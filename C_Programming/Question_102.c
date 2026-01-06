// Create a program to verify if a number is a palindrome.
#include <stdio.h>
int main()
{
  int number, reversed = 0, original;
  printf("Enter a number: ");
  scanf("%d", &number);
  original = number;
  while (number > 0)
  {
    reversed = reversed * 10 + number % 10;
    number /= 10;
  }
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