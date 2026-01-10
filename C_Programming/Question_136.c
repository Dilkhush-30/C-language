// Create a program to merge two sorted arrays.
#include <stdio.h>
void mergeSortedArrays(int *arr1, int size1, int *arr2, int size2, int *mergedArr)
{
  int i = 0, j = 0, k = 0;
  while (i < size1 && j < size2)
  {
    if (arr1[i] < arr2[j])
    {
      mergedArr[k++] = arr1[i++];
    }
    else
    {
      mergedArr[k++] = arr2[j++];
    }
  }
  while (i < size1)
  {
    mergedArr[k++] = arr1[i++];
  }
  while (j < size2)
  {
    mergedArr[k++] = arr2[j++];
  }
}
int main()
{
  int n1, n2, i;
  printf("Enter the number of elements in the first sorted array: ");
  scanf("%d", &n1);
  int arr1[n1];
  printf("Enter %d elements in sorted order:\n", n1);
  for (i = 0; i < n1; i++)
  {
    scanf("%d", &arr1[i]);
  }
  printf("Enter the number of elements in the second sorted array: ");
  scanf("%d", &n2);
  int arr2[n2];
  printf("Enter %d elements in sorted order:\n", n2);
  for (i = 0; i < n2; i++)
  {
    scanf("%d", &arr2[i]);
  }
  int mergedArr[n1 + n2];
  mergeSortedArrays(arr1, n1, arr2, n2, mergedArr);
  printf("Merged sorted array:\n");
  for (i = 0; i < n1 + n2; i++)
  {
    printf("%d ", mergedArr[i]);
  }
  printf("\n");
  return 0;
}