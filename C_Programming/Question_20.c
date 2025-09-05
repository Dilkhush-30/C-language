/* Create a program to calculate the Area of a Triangle. 
Area of triangle = ½*B*H */

#include<stdio.h>
int main()
{
  float base,height,area;

  printf("Enter base of the triangle :");
  scanf("%f",&base);
  printf("Enter height of the triangle :");
  scanf("%f",&height);

  area = 0.5 * base * height;
  printf("Area of the triangle is : %2f",area);
  return 0;
}