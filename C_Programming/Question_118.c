/* Call a function get_average that takes five int numbers and returns the average. */
#include <stdio.h>
float get_average(int a, int b, int c, int d, int e)
{
  float sum = a + b + c + d + e;
  return sum / 5;
}
int main()
{
  int num1, num2, num3, num4, num5;
  float average;

  // Prompt the user to enter five integers
  printf("Enter five integers: ");
  scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

  // Call the get_average function and store the result
  average = get_average(num1, num2, num3, num4, num5);

  // Print the average
  printf("The average of %d %d %d %d %d is: %.2f\n", num1, num2, num3, num4, num5, average);

  return 0;
}