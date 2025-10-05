/* Create a program to create a simple calculator that uses a 
switch statement to perform basic arithmetic operations 
like addition, subtraction, multiplication, and division. */
#include<stdio.h>
int main()
{
  char operator;
  float num1, num2, result;
  printf("Enter an operator (+, -, *, /): ");
  scanf(" %c", &operator);
  printf("Enter two operands: ");
  scanf("%f %f", &num1, &num2);
  switch (operator)
  {
  case '+':
    result = num1 + num2;
    printf("%.2f + %.2f = %.2f", num1, num2, result);
    break;
  case '-':
    result = num1 - num2;
    printf("%.2f - %.2f = %.2f", num1, num2, result);
    break;
  case '*':
    result = num1 * num2;
    printf("%.2f * %.2f = %.2f", num1, num2, result);
    break;
  case '/':
    if(num2 != 0) {
        result = num1 / num2;
        printf("%.2f / %.2f = %.2f", num1, num2, result);
    } else {
        printf("Error! Division by zero.");
    }
  default:
    printf("Invalid operator");
    break;
  }
  return 0;
}