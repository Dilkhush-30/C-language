/* Develop a program that calculates the sum of all numbers entered by
a user until the user enters 0. The total sum should then be displayed. */
#include <stdio.h>
int main()
{
  int number, sum = 0;
  printf("Enter numbers to sum (enter 0 to finish):\n");

  do
  {
    printf("Enter a number: ");
    scanf("%d", &number);
    sum += number;
  } while (number != 0);

  printf("The total sum is: %d\n", sum);
  return 0;
}