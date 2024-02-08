/*
          *
         ***
        *****
       *******
      *********
*/
#include<stdio.h>
int main()
{
    for(int i=0; i<=4; i++)
    {
        for(int j=3; j>=i; j--)
        {
            printf(" ");
        }
        for(int k=1; k<=(i*2)+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
} 
