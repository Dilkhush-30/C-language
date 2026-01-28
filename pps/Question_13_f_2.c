// Write a C program to find the Armstrong natural numbers using function.
#include <stdio.h>
#include <math.h>
int isArmstrong(int n)
{
  int originalNumber, remainder, result = 0, digits = 0;

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

  return result == originalNumber;
}
int main()
{
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);
  if (isArmstrong(n))
    printf("%d is an Armstrong number.", n);
  else
    printf("%d is not an Armstrong number.", n);
  return 0;
}