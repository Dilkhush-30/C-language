/* Write a program that continuously reads integers from the user and
prints their squares. Use an infinite loop and a break statement to
exit when a special number (e.g., -1) is entered.*/
#include <stdio.h>
int main()
{
  int number;
  printf("Enter integers to see their squares (enter -1 to exit):\n");

  while (1)
  {
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == -1)
    {
      break; // Exit the loop if the user enters -1
    }

    printf("The square of %d is %d\n", number, number * number);
  }

  printf("Program exited.\n");
  return 0;
}