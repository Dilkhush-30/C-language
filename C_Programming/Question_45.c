// Create a program to find the Least Common Multiple (LCM) of two numbers.
#include <stdio.h>
int main()
{
  int num1, num2, max, lcm;
  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2);
  // The maximum number between num1 and num2 is stored in max
  max = (num1 > num2) ? num1 : num2;
  lcm = max; // Start checking from the maximum number
  while (1)
  {
    if (lcm % num1 == 0 && lcm % num2 == 0)
    {
      printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
      break; // Exit the loop once LCM is found
    }
    lcm++; // Increment lcm to check the next number
  }
  return 0;
}