/*
     a
     a b
     a b c
     a b c d 
     a b c d e
*/
#include<stdio.h>
int main()
{
    for(int i=1; i<=5;i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%c ",'a'+j-1);
        }
        printf("\n");
    }
    return 0;
}