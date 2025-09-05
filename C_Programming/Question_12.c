/* Create a program to print the area of a 
square by inputting its side length */

#include<stdio.h>
int main()
{
  float side,area;

  printf("Enter the side length of the square :");
  scanf("%f",&side);

  area=side*side;
  printf("Area of the square is : %2f",area);

  return 0;
}