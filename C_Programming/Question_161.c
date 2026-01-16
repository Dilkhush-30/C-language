/*Write a program that asks the user for a filename, attempts
to open it, and reports whether the operation was successful
or not.*/
#include <stdio.h>
int main()
{
  char filename[100];
  FILE *file;

  // Ask the user for a filename
  printf("Enter the filename to open: ");
  scanf("%99s", filename);

  // Attempt to open the file
  file = fopen(filename, "r");
  if (file == NULL)
  {
    // If the file could not be opened, report failure
    printf("Failed to open the file: %s\n", filename);
  }
  else
  {
    // If the file was opened successfully, report success
    printf("File opened successfully: %s\n", filename);
    fclose(file); // Close the file after opening
  }

  return 0;
}