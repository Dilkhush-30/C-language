// Create a program to print the area of a circle by inputting its radius.
#include<stdio.h>
#define PI 3.14
int main()
{
  float radius,area;

  printf("Enter the radius of the circle :");
  scanf("%f",&radius);

  area= PI*radius*radius;
  printf("Area of the circle is : %2f",area);

  return 0;
}