// write a program to convert temperature given in fahrenheit in to degree celsius

#include<stdio.h>
int main()
{
   float  celsius,temperature;
   printf("Enter temperature in fahrenheit :");
   scanf("%f",&temperature);

   celsius=(temperature-32)*5/9;
   printf("celsius : %f", celsius);
   return 0;

}  