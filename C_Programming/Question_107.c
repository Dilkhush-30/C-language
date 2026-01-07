// Create a program using for to display if a number is prime or not.
#include <stdio.h>
#include <stdbool.h>
int main()
{
  int number, i;
  bool isPrime = true;

  printf("Enter a number to check if it is prime: ");
  scanf("%d", &number);

  if (number <= 1)
  {
    isPrime = false;
  }
  else
  {
    for (i = 2; i <= number / 2; i++)
    {
      if (number % i == 0)
      {
        isPrime = false;
        break;
      }
    }
  }

  if (isPrime)
  {
    printf("%d is a prime number.\n", number);
  }
  else
  {
    printf("%d is not a prime number.\n", number);
  }

  return 0;
}