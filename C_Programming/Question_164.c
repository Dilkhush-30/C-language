/*Write a program that takes user input and writes it to a file,
ensuring each entry is on a new line.*/
#include <stdio.h>
#include <string.h>
int main()
{
  char filename[100];
  FILE *file;
  char input[100];

  // Ask the user for a filename
  printf("Enter the filename to write to: ");
  scanf("%99s", filename);

  // Attempt to open the file for writing
  file = fopen(filename, "w");
  if (file == NULL)
  {
    // If the file could not be opened, report failure
    printf("Failed to open the file: %s\n", filename);
    return 1;
  }

  // Take user input and write it to the file
  printf("Enter text (type 'quit' to stop): ");
  while (scanf("%99s", input) == 1 && strcmp(input, "quit") != 0)
  {
    fprintf(file, "%s\n", input);
    printf("Enter text (type 'quit' to stop): ");
  }

  fclose(file); // Close the file after writing

  return 0;
}