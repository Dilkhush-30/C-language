// Create a program using for to display if a number is prime or not.
#include <stdio.h>
int main()
{
  int number, i, flag = 0;

  printf("Enter a number to check if it is prime: ");
  scanf("%d", &number);

  if (number <= 1)
  {
    flag = 1; // Numbers less than or equal to 1 are not prime
  }
  else
  {
    for (i = 2; i <= number / 2; i++)
    {
      if (number % i == 0)
      {
        flag = 1; // Number is not prime
        break;
      }
    }
  }

  if (flag == 0)
  {
    printf("%d is a prime number.\n", number);
  }
  else
  {
    printf("%d is not a prime number.\n", number);
  }

  return 0;
}