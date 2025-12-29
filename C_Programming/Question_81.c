// Write a program in c to find the number of vowels and consonants in a string.
#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
  char str[MAX];
  int i, vowels = 0, consonants = 0;

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  // Remove newline character if present
  str[strcspn(str, "\n")] = 0;

  for (i = 0; str[i] != '\0'; i++)
  {
    char ch = str[i];
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
      // Check for vowels
      if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
          ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      {
        vowels++;
      }
      else
      {
        consonants++;
      }
    }
  }

  printf("Number of vowels: %d\n", vowels);
  printf("Number of consonants: %d\n", consonants);

  return 0;
}