/* Create a program using continue to print only even numbers using
continue for odd numbers. */
#include <stdio.h>
int main()
{
  int number, i;
  printf("Enter the range up to which you want to print even numbers: ");
  scanf("%d", &number);

  printf("Even numbers up to %d are:\n", number);
  for (i = 1; i <= number; i++)
  {
    if (i % 2 != 0)
    {
      continue; // Skip odd numbers
    }
    printf("%d\n", i); // Print even numbers
  }
  return 0;
}