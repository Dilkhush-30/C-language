// Write a function that takes a string and reverses it in place.
#include <stdio.h>
#include <string.h>
void reverse_string(char *str)
{
  int start = 0;
  int end = strlen(str) - 1;
  char temp;

  while (start < end)
  {
    // Swap characters
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Move towards middle
    start++;
    end--;
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

  reverse_string(str);
  printf("Reversed string: %s\n", str);

  return 0;
}