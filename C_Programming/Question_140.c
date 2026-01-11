// Read a line of text from the user using fgets and then print it using puts.
#include <stdio.h>
int main()
{
  char str[100];
  printf("Enter a line of text: ");
  fgets(str, sizeof(str), stdin);
  printf("You entered: ");
  puts(str);
  return 0;
}