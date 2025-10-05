/* Create a program to find the minimum of two numbers using
ternary operator. */
#include <stdio.h>
int main()
{
  int num1, num2, min;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  min = (num1 < num2) ? num1 : num2;

  printf("The minimum number is: %d\n", min);

  return 0;
}