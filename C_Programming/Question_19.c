/* Create a program to calculate Perimeter of a rectangle. 
Perimeter of rectangle ABCD = A+B+C+D */

#include<stdio.h>
int main()
{
  float length,breadth,perimeter;

  printf("Enter length of ractangle : ");
  scanf("%f",&length);
  printf("Enter breadth of ractangle :");
  scanf("%f",&breadth);

  perimeter = 2*(length + breadth);
  printf("Perimeter of the ractangle is : %2f",perimeter);
  return 0;
}