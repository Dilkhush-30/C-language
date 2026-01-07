/* Create a function max that takes two float arguments and returns the
larger value.*/
#include <stdio.h>
float max(float a, float b)
{
  if (a > b)
    return a;
  else
    return b;
}
int main()
{
  float num1, num2, result;

  // Prompt the user to enter two floating-point numbers
  printf("Enter two floating-point numbers: ");
  scanf("%f %f", &num1, &num2);

  // Call the max function and store the result
  result = max(num1, num2);

  // Print the larger value
  printf("The larger of %.2f and %.2f is: %.2f\n", num1, num2, result);

  return 0;
}