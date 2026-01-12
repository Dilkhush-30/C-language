// Write a program to convert a input string to uppercase.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  // Convert to uppercase
  for (int i = 0; i < strlen(str); i++)
  {
    str[i] = toupper((unsigned char)str[i]);
  }

  printf("Uppercase string: %s", str);
  return 0;
}