//write a program to display the greatest between two given numbers

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter num 1:");
    scanf("%d",&num1);
    printf("Enter num 2:");
    scanf("%d",&num2);
    if (num1>num2)
    {
        printf("%d is greater",num1);
    }
    else
    {
        printf("%d is greater",num2);
    }
    return 0;
    
    
}