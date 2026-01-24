// C Program to Compare Two Files Character by Character
#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *file1, *file2;
  char ch1, ch2;
  int position = 0;
  int areIdentical = 1;

  // Open the first file in read mode
  file1 = fopen("file1.txt", "r");
  if (file1 == NULL)
  {
    printf("Could not open file1.txt\n");
    return 1;
  }

  // Open the second file in read mode
  file2 = fopen("file2.txt", "r");
  if (file2 == NULL)
  {
    printf("Could not open file2.txt\n");
    fclose(file1);
    return 1;
  }

  // Compare files character by character
  while (1)
  {
    ch1 = fgetc(file1);
    ch2 = fgetc(file2);
    position++;

    // If both characters are EOF, files are identical
    if (ch1 == EOF && ch2 == EOF)
      break;

    // If characters differ or one file ends before the other
    if (ch1 != ch2)
    {
      areIdentical = 0;
      printf("Files differ at position %d: '%c' vs '%c'\n", position, ch1, ch2);
      break;
    }
  }

  if (areIdentical)
  {
    printf("The files are identical.\n");
  }

  // Close the files
  fclose(file1);
  fclose(file2);

  return 0;
}