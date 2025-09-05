//Create a program to calculate product of two floating points numbers.

#include<stdio.h>
int main()
{
  float num1,num2,product;

  printf("Enter two floating point numbers : ");
  scanf("%f %f",&num1,&num2);

  product = num1 * num2;

  printf("Product of %2f and %2f is %2f",num1,num2,product);
  return 0;
}