// Reverse Number Program in C Using Recursion
#include <stdio.h>
int reverseRecursively(int num, int reverse)
{
  if (num == 0)
    return reverse;
  return reverseRecursively(num / 10, reverse * 10 + num % 10);
}

int main()
{
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  printf("Reversed number: %d\n", reverseRecursively(num, 0));
  return 0;
}