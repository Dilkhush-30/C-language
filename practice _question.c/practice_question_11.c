//write a program to check whether a student is passed or fail upon the marks given of 3 subjects,where passing marks are 33

#include<stdio.h>
int main()
{
    int sub1,sub2,sub3;
    printf("Enter the marks of subject 1:");
    scanf("%d",&sub1);

    printf("Enter the marks of subject 2:");
    scanf("%d",&sub2);

    printf("Enter the marks of subject 3:");
    scanf("%d",&sub3);
    if (sub1>=33&&sub2>=33&&sub3>=33)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}