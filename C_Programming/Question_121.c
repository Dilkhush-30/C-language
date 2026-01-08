/* Write a program that declares an integer variable and a pointer to it.
Assign a value and print it using the pointer. */
#include <stdio.h>
int main()
{
  int num = 42;
  int *ptr = &num;
  printf("Value of num: %d\n", *ptr);
  return 0;
}