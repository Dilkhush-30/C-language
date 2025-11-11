/*
 * * * * *
 * * * *
 * * *
 * *
 *
 */
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        int k = 5;
        while (k >= i)
        {
            printf("* ");
            k--;
        }

        printf("\n");
    }
    return 0;
}