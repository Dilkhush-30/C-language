//writr a program to find simple intrest

#include<stdio.h>
int main()
{
    int P,R,T,SI;
    printf("Enter the principal :");
    scanf("%d",&P);

    printf("Enter the rate :");
    scanf("%d",&R);

    printf("Enter the time :");
    scanf("%d",&T);

    SI=(P*R*T)/100;
    printf("The simple intrest is :%d",SI);

    return 0;
}