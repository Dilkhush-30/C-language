#include <stdio.h>
int main()
{
  int arr1[3] = {10, 20, 30};
  int arr2[3] = {40, 50, 60};
  int merged[6];
  int i;

  // Merge using one loop
  printf("Merged array: ");
  for (i = 0; i < 6; i++)
  {
    if (i < 3)
    {
      merged[i] = arr1[i];
    }
    else
    {
      merged[i] = arr2[i - 3];
    }
    printf("%d ", merged[i]);
  }
  return 0;
}