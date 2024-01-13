//a programm to check students result

#include<stdio.h>
int main()
 {
   int marks;
   printf("enter the value:");
   scanf("%d",&marks);
   if (marks>=65)
   {
    printf("Topper");
   }
   else if (marks>=55)
   {
    printf("First");
   }
   else
   {
    printf("fail");
   }
    return 0;
}