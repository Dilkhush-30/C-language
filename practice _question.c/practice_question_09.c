//write a program to display the greatest among the three numbers

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number of a :");
    scanf("%d",&a);

    printf("Enter the number of b :");
    scanf("%d",&b);

    printf("Enter the number of c :");
    scanf("%d",&c);
    if (a>b&&a>c)
    {
        printf("Greatest number is : %d",a);
    }
    if (b>a&&b>c)
    {
        printf("Greatest number is : %d",b);
    }
    if (c>a&&c>b)
    {
        printf("Greatest number is : %d",c);
    }
    return 0;
    

    
}