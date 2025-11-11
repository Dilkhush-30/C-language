#include <stdio.h>

void update(int *x)
{
  *x = *x + 10; // Modifies the original variable
}
int main()
{
  int num = 5;
  update(&num); // Passing the address of num
  printf("Updated value: %d\n", num);
  return 0;
}