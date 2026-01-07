// Create a program using recursion to display the Fibonacci series upto a certain number of terms.
#include <stdio.h>
void fibonacci(int n, int a, int b)
{
  if (n == 0)
    return;
  printf("%d ", a);
  fibonacci(n - 1, b, a + b);
}
int main()
{
  int terms;
  printf("Enter the number of terms for the Fibonacci series: ");
  scanf("%d", &terms);

  printf("Fibonacci series up to %d terms:\n", terms);
  fibonacci(terms, 0, 1);

  printf("\n");
  return 0;
}