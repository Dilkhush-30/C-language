/*Write a program that copies one text file's contents to
another, stopping when it reaches EOF of the source file.*/
#include <stdio.h>
int main()
{
  char sourceFilename[100], destFilename[100];
  FILE *sourceFile, *destFile;
  int ch;

  // Ask the user for source and destination filenames
  printf("Enter the source filename: ");
  scanf("%99s", sourceFilename);
  printf("Enter the destination filename: ");
  scanf("%99s", destFilename);

  // Attempt to open the source file for reading
  sourceFile = fopen(sourceFilename, "r");
  if (sourceFile == NULL)
  {
    printf("Failed to open the source file: %s\n", sourceFilename);
    return 1;
  }

  // Attempt to open the destination file for writing
  destFile = fopen(destFilename, "w");
  if (destFile == NULL)
  {
    printf("Failed to open the destination file: %s\n", destFilename);
    fclose(sourceFile); // Close the source file before exiting
    return 1;
  }

  // Copy contents from source file to destination file
  while ((ch = fgetc(sourceFile)) != EOF)
  {
    fputc(ch, destFile);
  }

  // Close both files
  fclose(sourceFile);
  fclose(destFile);

  printf("Contents copied from %s to %s successfully.\n", sourceFilename, destFilename);
  return 0;
}