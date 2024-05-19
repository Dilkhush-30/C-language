// write a program to calculate and display a length value in Kms and Mts,where the value is entered in meters only

#include<stdio.h>
int main()
{
    float M,KM;
    printf("Enter the distance in meters :");
    scanf("%f",&M);

    KM=M/1000;
    printf(" %f meters = %f kilometers ",M,KM);
    return 0;
}