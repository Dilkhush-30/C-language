// wap in c to create and store information in a text file , read and existing file, write multiple lines in a file.
#include <stdio.h>
#include <string.h>
int main()
{
  FILE *file;
  char filename[] = "example.txt";
  char ch;

  // Create and write to a file
  file = fopen(filename, "w");
  if (file == NULL)
  {
    printf("Error opening file for writing.\n");
    return 1;
  }
  printf("Enter text to write to the file (type 'EOF' to end):\n");
  while (1)
  {
    char buffer[100];
    fgets(buffer, sizeof(buffer), stdin);
    if (strcmp(buffer, "EOF\n") == 0)
      break;
    fputs(buffer, file);
  }
  fclose(file);
  printf("Data written to %s successfully.\n", filename);
  // Read from the file
  file = fopen(filename, "r");
  if (file == NULL)
  {
    printf("Error opening file for reading.\n");
    return 1;
  }
  printf("Contents of %s:\n", filename);
  while ((ch = fgetc(file)) != EOF)
  {
    putchar(ch);
  }
  fclose(file);
  return 0;
}