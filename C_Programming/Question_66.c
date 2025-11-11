// Function to Check if a Number is Prime
#include <stdio.h>
int is_prime(int num)
{
  if (num <= 1)
  {
    return 0; // Numbers less than or equal to 1 are not prime
  }
  for (int i = 2; i * i <= num; i++) // Check divisibility up to the square root of num
  {
    if (num % i == 0)
      return 0; // Found a divisor, not prime
  }
  return 1; // No divisors found, it's prime
}
int main()
{
  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);

  if (is_prime(num))
    printf("%d is a prime number.\n", num);
  else
    printf("%d is not a prime number.\n", num);

  return 0;
}