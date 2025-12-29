#include <stdio.h>
int main()
{
  // Two arrays to merge
  int first[] = {1, 2, 3};
  int second[] = {4, 5, 6};
  int merged[6]; // 3 + 3 = 6

  int i;

  // Copy first array
  for (i = 0; i < 3; i++)
  {
    merged[i] = first[i];
  }

  // Copy second array
  for (i = 0; i < 3; i++)
  {
    merged[3 + i] = second[i];
  }

  // Show result
  printf("Merged array: ");
  for (i = 0; i < 6; i++)
  {
    printf("%d ", merged[i]);
  }
  return 0;
}