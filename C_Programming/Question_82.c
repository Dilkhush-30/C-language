// Reverse a string using pointers in C
#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
  char str[MAX];
  char *start_ptr, *end_ptr, temp;

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  // Remove newline character if present
  str[strcspn(str, "\n")] = 0;

  start_ptr = str;                 // Pointer to the start of the string
  end_ptr = str + strlen(str) - 1; // Pointer to the end of the string

  // Swap characters from start and end pointers until they meet in the middle
  while (start_ptr < end_ptr)
  {
    // Swap the characters
    temp = *start_ptr;
    *start_ptr = *end_ptr;
    *end_ptr = temp;

    // Move the pointers closer to the center
    start_ptr++;
    end_ptr--;
  }

  printf("Reversed string: %s\n", str);

  return 0;
}