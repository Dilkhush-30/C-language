//write a program to swap two numbers

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of A :");
    scanf("%d",&a);

    printf("Enter the value of B :");
    scanf("%d",&b);

    printf("Before swapping numbers :%d %d \n",a,b);

    //swapping
    c=a;
    a=b;
    b=c;
    printf("After swapping numbers :%d %d",a,b);
    return 0;

}