/*Create a program using break to read inputs from the user in a loop and
break the loop if a specific keyword (like "exit") is entered.*/
#include <stdio.h>
#include <string.h>
int main()
{
  char input[100];

  while (1)
  {
    printf("Enter a command (type 'exit' to quit): ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character from input if present
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n')
    {
      input[len - 1] = '\0';
    }

    // Check for the exit keyword
    if (strcmp(input, "exit") == 0)
    {
      printf("Exiting the program.\n");
      break;
    }

    // Process the input (for demonstration, we just print it)
    printf("You entered: %s\n", input);
  }

  return 0;
}