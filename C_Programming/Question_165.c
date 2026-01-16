/*Develop a program that appends user input to the end of a
log file each time it's run*/
#include <stdio.h>
#include <string.h>
int main()
{
  char filename[100];
  FILE *file;
  char input[100];

  // Ask the user for a filename
  printf("Enter the log filename: ");
  scanf("%99s", filename);

  // Attempt to open the file for appending
  file = fopen(filename, "a");
  if (file == NULL)
  {
    // If the file could not be opened, report failure
    printf("Failed to open the file: %s\n", filename);
    return 1;
  }

  // Take user input and append it to the file
  printf("Enter text (type 'quit' to stop): ");
  while (scanf("%99s", input) == 1 && strcmp(input, "quit") != 0)
  {
    fprintf(file, "%s\n", input);
    printf("Enter text (type 'quit' to stop): ");
  }

  fclose(file); // Close the file after appending

  return 0;
}