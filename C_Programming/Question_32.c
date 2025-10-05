/* Create a program to calculate the absolute value of a given 
  integer using ternary operator. */

  #include<stdio.h>
  int main()
  {
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);

    int absoluteValue = (num < 0) ? -num : num;
    printf("The Absolute Value of %d is %d\n", num, absoluteValue);
    
    return 0;
  }