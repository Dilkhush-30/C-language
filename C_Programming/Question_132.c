// Create a program to return a new array deleting a specific element
#include <stdio.h>
int main()
{
  int n, i, element, j = 0;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  int arr[n], newArr[n - 1];
  printf("Enter %d elements:\n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter the element to be deleted: ");
  scanf("%d", &element);
  for (i = 0; i < n; i++)
  {
    if (arr[i] != element)
    {
      newArr[j] = arr[i];
      j++;
    }
  }
  printf("Array after deleting %d:\n", element);
  for (i = 0; i < j; i++)
  {
    printf("%d ", newArr[i]);
  }
  printf("\n");
  return 0;
}