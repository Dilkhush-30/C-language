// Write a C program to find the Armstrong natural numbers using for loop.
#include <stdio.h>
#include <math.h>
int main()
{
  int n, originalNumber, remainder, result = 0, digits = 0;
  printf("Enter an integer: ");
  scanf("%d", &n);
  originalNumber = n;

  // Count number of digits
  for (int temp = n; temp != 0; temp /= 10)
  {
    digits++;
  }

  // Calculate Armstrong number
  for (; n != 0; n /= 10)
  {
    remainder = n % 10;
    result += pow(remainder, digits);
  }

  if (result == originalNumber)
    printf("%d is an Armstrong number.", originalNumber);
  else
    printf("%d is not an Armstrong number.", originalNumber);

  return 0;
}