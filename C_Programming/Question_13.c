/* Create a program to define a constant for the mathematical value 
pi (3.14159) and use it to calculate and print the circumference of a 
circle with a radius input from user. */

#include<stdio.h>
#define PI 3.14
int main()
{
  float radius,circcumference;

  printf("Enter the radius of the circle :");
  scanf("%f",&radius);

  circcumference=2*PI*radius;
  printf("Circumference of the circle is : %2f",circcumference);

  return 0;
}