#include <stdio.h>
int main()
{
  int arr1[50], arr2[50], merge[100]; // Declare three arrays: arr1, arr2 for input; merge for merged result
  int n1, n2;                         // n1 = number of elements in first array, n2 = in second array
  int i, j;                           // loop counters

  // Read size of first array
  printf("Enter number of elements in first array: ");
  scanf("%d", &n1);

  // Read elements of first array
  printf("Enter elements of first array:\n");
  for (i = 0; i < n1; i++)
  {
    scanf("%d", &arr1[i]);
  }

  // Read size of second array
  printf("Enter number of elements in second array: ");
  scanf("%d", &n2);

  // Read elements of second array
  printf("Enter elements of second array:\n");
  for (i = 0; i < n2; i++)
  {
    scanf("%d", &arr2[i]);
  }

  // Copy all elements from first array to merged array
  for (i = 0; i < n1; i++)
  {
    merge[i] = arr1[i];
  }

  // Copy all elements from second array to merged array
  // starting from where first array ended
  for (j = 0; j < n2; j++)
  {
    merge[i] = arr2[j];
    i++; // increment i so that next arr2[j] goes to next position
  }

  // Print merged array
  printf("Merged array is:\n");
  for (i = 0; i < n1 + n2; i++)
  {
    printf("%d ", merge[i]);
  }
  return 0;
}