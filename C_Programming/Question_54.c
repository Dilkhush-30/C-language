/*
 *
 * *
 * * *
 * * * *
 * * *
 * *
 *
 */
#include <stdio.h>
int main()
{
  int n = 4; // Number of rows for the upper half of the diamond

  // Upper half of the diamond
  for (int i = 1; i <= n; i++)
  {
    // Print leading spaces
    for (int j = n; j > i; j--)
    {
      printf(" ");
    }
    // Print stars
    for (int k = 1; k <= i; k++)
    {
      printf("* ");
    }
    printf("\n");
  }

  // Lower half of the diamond
  for (int i = n - 1; i >= 1; i--)
  {
    // Print leading spaces
    for (int j = n; j > i; j--)
    {
      printf(" ");
    }
    // Print stars
    for (int k = 1; k <= i; k++)
    {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}