//Create a program to swap two numbers.

#include<stdio.h>
int main()
{
  int a,b,temp;

  printf("Enter the value of a :");
  scanf("%d",&a);
  printf("Enter the value of b :");
  scanf("%d",&b);

  printf("Before Swapping : a =%d b=%d\n",a,b);
  
  temp= a;
  a=b;
  b=temp;

  printf("After Swapping : a =%d b=%d",a,b);

  return 0;
}