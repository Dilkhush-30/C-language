/*Given an integer value, convert it 
to a floating-point value and print both.*/

#include<stdio.h>
int main()
{
  int intvalue;
  float floatvalue;

  printf("Enter a integer value : ");
  scanf("%d",&intvalue);

  floatvalue = (float)intvalue;

  printf("Integer Value : %d\n",intvalue);
  printf("Floating_point value : %2f",floatvalue);

  return 0;
}