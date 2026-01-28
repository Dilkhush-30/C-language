// W.A.P in c to find the any given integer is present in the given array or not.
#include <stdio.h>
int main()
{
  int arr[] = {10, 20, 30, 40, 50};
  int n, found = 0;
  int size = sizeof(arr) / sizeof(arr[0]);
  printf("Enter an integer to search: ");
  scanf("%d", &n);
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == n)
    {
      found = 1;
      break;
    }
  }
  if (found)
    printf("%d is present in the array.", n);
  else
    printf("%d is not present in the array.", n);
  return 0;
}