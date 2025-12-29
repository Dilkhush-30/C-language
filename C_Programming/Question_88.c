#include <stdio.h>
int main()
{
  int numbers[5] = {18, 21, 8, 56, 19};
  int swap;

  printf("STEP 1: Original array\n");
  for (int i = 0; i < 5; i++)
  {
    printf("numbers[%d] = %d\n", i, numbers[i]);
  }

  // Step 1: Swap first and last
  printf("\nSTEP 2: Swap numbers[0] and numbers[4]\n");
  swap = numbers[0];
  numbers[0] = numbers[4];
  numbers[4] = swap;

  // Step 2: Swap second and second last
  printf("STEP 3: Swap numbers[1] and numbers[3]\n");
  swap = numbers[1];
  numbers[1] = numbers[3];
  numbers[3] = swap;
  // numbers[2] (middle) stays same

  printf("\nSTEP 4: Final reversed array\n");
  for (int i = 0; i < 5; i++)
  {
    printf("numbers[%d] = %d\n", i, numbers[i]);
  }
  return 0;
}