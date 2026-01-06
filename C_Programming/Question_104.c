/* Create a program that prompts the user to enter a positive number.
Use a do-while loop to keep asking for the number until the user
enters a valid positive number. */
#include <stdio.h>
int main()
{
  int number;
  do
  {
    printf("Enter a positive number: ");
    scanf("%d", &number);
    if (number <= 0)
    {
      printf("Invalid input. Please try again.\n");
    }
  } while (number <= 0);

  printf("You entered a valid positive number: %d\n", number);
  return 0;
}