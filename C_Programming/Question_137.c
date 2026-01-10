// Create a program to search an element in a 2-D array.
#include <stdio.h>
int main()
{
  int rows, cols, i, j, element, found = 0;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &cols);
  int arr[rows][cols];
  printf("Enter %d elements in the 2-D array:\n", rows * cols);
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  printf("Enter the element to be searched: ");
  scanf("%d", &element);
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      if (arr[i][j] == element)
      {
        found = 1;
        break;
      }
    }
    if (found)
    {
      break;
    }
  }
  if (found)
  {
    printf("Element %d found in the array.\n", element);
  }
  else
  {
    printf("Element %d not found in the array.\n", element);
  }
  return 0;
}