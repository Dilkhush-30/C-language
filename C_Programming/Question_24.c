/* .Create a program that determines if a number is positive, negative,
or zero.*/
#include <stdio.h>
int main()
{
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (number > 0)
  {
    printf("The number is positive.\n");
  }
  else if (number < 0)
  {
    printf("The number is negative.\n");
  }
  else
  {
    printf("The number is zero.\n");
  }

  return 0;
}