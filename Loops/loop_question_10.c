//input a number and find its factorial

#include<stdio.h>
int main()
{
    int num =1;
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    for(int i=1; i<=a; i++)
    {
       num=num * i;
       
    }
    printf("factorial %d\n",num);
    
    return 0;
}