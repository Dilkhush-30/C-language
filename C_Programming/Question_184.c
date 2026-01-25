// Reverse Number Program in C Using String
#include <stdio.h>
#include <string.h>
int main()
{
  char numStr[20], reversedStr[20];

  // Input number as string from user
  printf("Enter an integer: ");
  scanf("%s", numStr);

  int len = strlen(numStr);

  // Reverse the string
  for (int i = 0; i < len; i++)
  {
    reversedStr[i] = numStr[len - i - 1];
  }
  reversedStr[len] = '\0'; // Null-terminate the reversed string

  // Output the reversed number
  printf("Reversed Number: %s\n", reversedStr);

  return 0;
}