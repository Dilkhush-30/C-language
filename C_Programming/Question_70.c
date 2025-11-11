// Fibonacci Series using Recursion
#include <stdio.h>
// User-defined recursive function for Fibonacci
int fibonacci(int n)
{
  if (n <= 1)
    return n;                                 // Base case
  return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}
int main()
{
  int n = 7;
  printf("Fibonacci Series: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", fibonacci(i));
  }
  printf("\n");
  return 0;
}