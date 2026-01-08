/*Create a program to find number of occurrences of an element in an array.*/
#include <stdio.h>
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 2, 2};
  int size = sizeof(arr) / sizeof(arr[0]);
  int element = 2;
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == element)
    {
      count++;
    }
  }
  printf("Number of occurrences of %d: %d\n", element, count);
  return 0;
}