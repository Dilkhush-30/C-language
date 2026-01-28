// Write a C program to find the fibonacci series using recursion.
#include <stdio.h>
void fibonacci(int n, int t1, int t2)
{
  if (n == 0)
    return;
  printf("%d, ", t1);
  fibonacci(n - 1, t2, t1 + t2);
}
int main()
{
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: \n");
  fibonacci(n, 0, 1);
  return 0;
}