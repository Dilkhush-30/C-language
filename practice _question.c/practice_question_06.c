//write a program to swap two numbers without using third variable

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of A :");
    scanf("%d",&a);

    printf("Enter the value of B :");
    scanf("%d",&b);

    printf("Before swapping numbers :%d %d \n",a,b);

    //swapping
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping numbers :%d %d",a,b);
    return 0;
}