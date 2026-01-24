#include <stdio.h>
#include <string.h>

int main()
{
  FILE *f1, *f2;
  char line1[256], line2[256];
  int diff = 0, line = 1;

  f1 = fopen("file1.txt", "r");
  f2 = fopen("file2.txt", "r");

  if (f1 == NULL || f2 == NULL)
  {
    printf("Error: Cannot open files.\n");
    return 1;
  }

  // Compare each line from both files
  while (fgets(line1, sizeof(line1), f1) != NULL &&
         fgets(line2, sizeof(line2), f2) != NULL)
  {

    // If we found different lines
    if (strcmp(line1, line2) != 0)
    {
      printf("Difference found at line %d\n", line);
      diff = 1;
      break;
    }
    line++;
  }

  // All lines are same
  if (diff == 0)
    printf("Files are identical.\n");

  fclose(f1);
  fclose(f2);
  return 0;
}