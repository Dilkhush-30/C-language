// Write a function that adds that takes 4 int parameters and returns the sum.
#include <stdio.h>
int add(int a, int b, int c, int d)
{
  return a + b + c + d; // Return the sum of the four integers
}
int main()
{
  int num1, num2, num3, num4, sum;

  // Prompt the user to enter four integers
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

  // Call the add function and store the result in sum
  sum = add(num1, num2, num3, num4);

  // Print the sum
  printf("The sum of %d, %d, %d, and %d is: %d\n", num1, num2, num3, num4, sum);

  return 0;
}