/* Implement a void minmax(int *a, int *b, int *min, int *max) function
that takes two integer pointers a and b as input and assigns the
smaller value to min and the larger value to max using call by
reference. Write a main function to test it with different values.*/

#include <stdio.h>
void minmax(int *a, int *b, int *min, int *max)
{
  if (*a < *b)
  {
    *min = *a;
    *max = *b;
  }
  else
  {
    *min = *b;
    *max = *a;
  }
}
int main()
{
  int num1, num2, minimum, maximum;

  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2);

  minmax(&num1, &num2, &minimum, &maximum);

  printf("Minimum: %d\n", minimum);
  printf("Maximum: %d\n", maximum);

  return 0;
}