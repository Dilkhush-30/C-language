// table

#include <stdio.h>
int main()
{
    int num;
    int i = 1;
    int t;
    printf("Enter the number : ");
    scanf("%d", &num);
    while (i <= 10)
    {
        t = num * i;
        // printf("%d\",t);
        printf("%d X %d = %d\n", num, i, t);
        i++;
    }
    return 0;
}