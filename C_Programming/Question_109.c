/* Create a program using continue to sum all positive numbers entered
by the user; skip any negative numbers. */
#include <stdio.h>
int main()
{
  int number, sum = 0;
  printf("Enter numbers to sum (enter 0 to finish):\n");

  while (1)
  {
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0)
    {
      break; // Exit the loop if the user enters 0
    }

    if (number < 0)
    {
      continue; // Skip negative numbers
    }

    sum += number; // Add positive numbers to sum
  }

  printf("The total sum of positive numbers is: %d\n", sum);
  return 0;
}