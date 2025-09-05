/* Create a program that takes two numbers and shows result of all 
arithmetic operators (+,-,*,/,%). */

#include<stdio.h>
int main()
{
  int a,b ,Add,Sub,Mul,Div,Mdiv;
  printf("Enter the value of a :");
  scanf("%d",&a);
  printf("Enter the value of b :");
  scanf("%d",&b);

  Add = a+b;
  Sub = a-b;
  Mul = a*b;
  Div = a/b;
  Mdiv = a%b;

  printf("Addition : %d\n",Add);
  printf("Substraction : %d\n",Sub);
  printf("Multiplication : %d\n",Mul);
  printf("Division : %d\n",Div);
  printf("Modulus Division : %d\n",Mdiv);

  return 0;

}