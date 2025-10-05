/*Create a program to find if the given number is even or odd using ternary operator.*/
#include<stdio.h>
int main()
{
  int num;
  printf("Enter the Number : ");
  scanf("%d",&num);
  (num % 2 == 0)? printf("The Given Number %d is Even\n",num) : printf("The Given Number %d is Odd\n",num);
  return 0;
}
