// Write a C program to find the Armstrong natural numbers using recursion.
#include <stdio.h>
#include <math.h>
int isArmstrongHelper(int n, int originalNumber, int digits)
{
  if (n == 0)
    return 0;
  int remainder = n % 10;
  return pow(remainder, digits) + isArmstrongHelper(n / 10, originalNumber, digits);
}
int isArmstrong(int n)
{
  int digits = 0;
  int temp = n;

  // Count number of digits
  while (temp != 0)
  {
    digits++;
    temp /= 10;
  }

  int result = isArmstrongHelper(n, n, digits);
  return result == n;
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