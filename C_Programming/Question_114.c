// Define a function square that takes an int and returns its square.
#include <stdio.h>
int square(int num)
{
  return num * num; // Return the square of the integer
}
int main()
{
  int number, result;

  // Prompt the user to enter an integer
  printf("Enter an integer to find its square: ");
  scanf("%d", &number);

  // Call the square function and store the result
  result = square(number);

  // Print the square of the integer
  printf("The square of %d is: %d\n", number, result);

  return 0;
}