// Write a function that uses pointer arithmetic to copy an array of char into another.
#include <stdio.h>
void copyCharArray(char *source, char *destination, int size)
{
  for (int i = 0; i < size; i++)
  {
    *(destination + i) = *(source + i);
  }
}
int main()
{
  char source[] = "Hello";
  char destination[10];
  int size = sizeof(source) - 1;
  copyCharArray(source, destination, size);
  printf("Source: %s\n", source);
  printf("Destination: %s\n", destination);
  return 0;
}