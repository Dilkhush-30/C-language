/* Create a program that checks if a given string is a palindrome (the same
forwards and backwards) and outputs the result. */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(const char *str)
{
  int len = strlen(str);
  for (int i = 0; i < len / 2; i++)
  {
    if (str[i] != str[len - 1 - i])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  // Remove newline character from input if present
  size_t len = strlen(str);
  if (len > 0 && str[len - 1] == '\n')
  {
    str[len - 1] = '\0';
  }

  if (is_palindrome(str))
  {
    printf("'%s' is a palindrome.\n", str);
  }
  else
  {
    printf("'%s' is not a palindrome.\n", str);
  }

  return 0;
}