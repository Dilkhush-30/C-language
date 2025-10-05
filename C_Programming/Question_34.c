/*  Create a program to print the month of the year based on a 
    number (1-12) input by the user. */

#include<stdio.h>
int main()
{
  int number;
  printf("Enter the Number (1-12) : ");
  scanf("%d",&number);

  (number==1)? printf("The Month is January\n"):
  (number==2)? printf("The Month is February\n"):
  (number==3)? printf("The Month is March\n"):
  (number==4)? printf("The Month is April\n"):
  (number==5)? printf("The Month is May\n"):
  (number==6)? printf("The Month is June\n"):
  (number==7)? printf("The Month is July\n"):
  (number==8)? printf("The Month is August\n"):
  (number==9)? printf("The Month is September\n"):
  (number==10)? printf("The Month is October\n"):
  (number==11)? printf("The Month is November\n"):
  (number==12)? printf("The Month is December\n"):
  printf("The Given Number %d is Invalid\n",number);
  
  return 0;
}