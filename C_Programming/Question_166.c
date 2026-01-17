/* Create a program that performs both reading and writing
operations on a file called data.txt */
#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *file;
  char buffer[256];

  // Open the file for writing
  file = fopen("data.txt", "w");
  if (file == NULL)
  {
    perror("Error opening file for writing");
    return EXIT_FAILURE;
  }

  // Write some data to the file
  fprintf(file, "Hello, World!\n");
  fprintf(file, "This is a test file.\n");
  fclose(file);

  // Open the file for reading
  file = fopen("data.txt", "r");
  if (file == NULL)
  {
    perror("Error opening file for reading");
    return EXIT_FAILURE;
  }

  // Read and display the contents of the file
  printf("Contents of data.txt:\n");
  while (fgets(buffer, sizeof(buffer), file) != NULL)
  {
    printf("%s", buffer);
  }
  fclose(file);

  return EXIT_SUCCESS;
}