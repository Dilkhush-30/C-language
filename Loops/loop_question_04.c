//table
#include<stdio.h>
int main()
{
    int num,table;
    printf("Enter the number");
    scanf("%d",&num);
    for(int i=1; i<=10; i++)
    {
        table=num*i;
        printf("%d x %d = %d\n", num,i,table);
    }
    return 0;
}