//A programm to input two number and find H.C.F

#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter two numbers:- \n");
  scanf("%d%d",&a,&b);
  if(b>a)
  {
    a=a+b;
    b=a-b;
    a=a-b;
  }
  while (a>b)
  {
    c=a%b;
    if(c==0)
    {
      printf("\nH.C.M=%d",b);
      a=c*a;
    }
    else
    {
      a=b;
      b=c;
    }
  }
  return 0;
}