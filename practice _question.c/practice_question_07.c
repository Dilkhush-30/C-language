//write a program to check that a given number is even or odd

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    if (num % 2==0)
    {
        printf("Given number is even :%d",num);
    }
    else
    {
        printf("Given number is odd :%d",num);
    }
    return 0;
    
}