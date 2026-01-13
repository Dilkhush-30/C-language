/*Implement a trim function that removes
leading and trailing spaces from a string.*/
#include <stdio.h>
#include <string.h>
void trim_string(char *str)
{
  char *start = str;
  char *end;

  // Move start pointer to the first non-space character
  while (*start == ' ')
  {
    start++;
  }

  // If the string is all spaces
  if (*start == '\0')
  {
    str[0] = '\0';
    return;
  }

  // Move end pointer to the last non-space character
  end = start + strlen(start) - 1;
  while (end > start && *end == ' ')
  {
    end--;
  }

  // Set the new null terminator
  *(end + 1) = '\0';

  // Shift the trimmed string to the beginning
  if (start != str)
  {
    memmove(str, start, end - start + 2);
  }
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

  trim_string(str);
  printf("Trimmed string: '%s'\n", str);

  return 0;
}