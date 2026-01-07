/* Demonstrate with a function increment that the original integer
passed to it does not change after incrementing it inside the function. */
#include <stdio.h>
void increment(int num)
{
  num++; // Increment the local copy of the integer
}
int main()
{
  int number = 5;
  printf("Original number: %d\n", number);

  increment(number); // Call the increment function

  printf("Number after calling increment: %d\n", number); // The original value remains unchanged

  return 0;
}