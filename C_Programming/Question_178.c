// C Program to Compare Two Files in C with Error Checking
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  FILE *f1 = fopen("file1.txt", "r");
  FILE *f2 = fopen("file2.txt", "r");

  if (f1 == NULL || f2 == NULL)
  {

    // Error message if file can't be opened
    perror("Error opening file");
    return 1;
  }

  char line1[300], line2[300];
  int lineNum = 0, diffFound = 0;

  // Read both files line by line
  while (1)
  {
    char *res1 = fgets(line1, sizeof(line1), f1);
    char *res2 = fgets(line2, sizeof(line2), f2);
    lineNum++;

    // Check for read error
    if (ferror(f1) || ferror(f2))
    {
      perror("Error reading from file");
      fclose(f1);
      fclose(f2);
      return 1;
    }

    // If both reached end, stop reading
    if (res1 == NULL && res2 == NULL)
      break;

    // If one file ends early or lines differ
    if (res1 == NULL || res2 == NULL || strcmp(line1, line2) != 0)
    {
      printf("\nDifference found at line %d:\n", lineNum);
      printf("File1: %s", (res1 ? line1 : "EOF reached\n"));
      printf("File2: %s", (res2 ? line2 : "EOF reached\n"));
      diffFound = 1;

      // Stop after first difference
      break;
    }
  }

  if (!diffFound)
    printf("Both files are identical.\n");
  else
    printf("Files differ above line %d.\n", lineNum);

  fclose(f1);
  fclose(f2);
  return 0;
}