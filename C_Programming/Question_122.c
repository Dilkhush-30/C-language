/* Write a program to change the value of an integer variable using a
pointer and the * operator. */
#include <stdio.h>
int main()
{
  int num = 42;
  int *ptr = &num;
  printf("Value of num: %d\n", *ptr);
  *ptr = 100;
  printf("Value of num after modification: %d\n", *ptr);
  return 0;
}