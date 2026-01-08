/*  Write a C program that initializes an unsigned int to its maximum
possible value and an int to a negative number. Add 1 to both, and
print the results to show how the unsigned int wraps around to 0,
whereas the int remains negative due to overflow */

#include <stdio.h>
#include <limits.h>
int main()
{
  unsigned int u_num = UINT_MAX; // Initialize to maximum value
  int num = -1;                  // Initialize to a negative number

  printf("Before addition:\n");
  printf("Unsigned int: %u\n", u_num);
  printf("Signed int: %d\n", num);

  u_num += 1; // Add 1 to unsigned int
  num += 1;   // Add 1 to signed int

  printf("After addition:\n");
  printf("Unsigned int: %u\n", u_num); // Should wrap around to 0
  printf("Signed int: %d\n", num);     // Should remain negative

  return 0;
}