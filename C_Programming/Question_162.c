/*Create a program that reads integers from a file and
calculates their sum.*/
#include <stdio.h>
int main()
{
  char filename[100];
  FILE *file;
  int number, sum = 0;

  // Ask the user for a filename
  printf("Enter the filename to read: ");
  scanf("%99s", filename);

  // Attempt to open the file
  file = fopen(filename, "r");
  if (file == NULL)
  {
    // If the file could not be opened, report failure
    printf("Failed to open the file: %s\n", filename);
    return 1;
  }

  // Read integers from the file and calculate their sum
  while (fscanf(file, "%d", &number) == 1)
  {
    sum += number;
  }

  // Report the sum
  printf("The sum of integers in the file is: %d\n", sum);

  fclose(file); // Close the file after reading

  return 0;
}