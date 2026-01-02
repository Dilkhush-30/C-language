/* Given an array arr, rotate the array by one position in clockwise direction.

Examples:

Input: arr[] = [1, 2, 3, 4, 5]
Output: [5, 1, 2, 3, 4]
Explanation: If we rotate arr by one position in clockwise 5 come to
 the front and remaining those are shifted to the end.

Input: arr[] = [9, 8, 7, 6, 4, 2, 1, 3]
Output: [3, 9, 8, 7, 6, 4, 2, 1]
Explanation: After rotating clock-wise 3 comes in first position.

Constraints:
1<=arr.size()<=105
0<=arr[i]<=105 */

#include <stdio.h>
#define MAX_SIZE 100
void rotateClockwise(int arr[], int n)
{
  if (n <= 1)
    return; // No rotation needed for arrays of size 0 or 1

  int lastElement = arr[n - 1]; // Store the last element

  // Shift all elements to the right by one position
  for (int i = n - 1; i > 0; i--)
  {
    arr[i] = arr[i - 1];
  }

  arr[0] = lastElement; // Place the last element at the front
}
int main()
{
  int arr[MAX_SIZE];
  int n;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  rotateClockwise(arr, n);

  printf("Array after rotating clockwise by one position:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}