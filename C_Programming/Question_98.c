/* Given an array arr[] of positive integers. The task is to return the count of the number of odd and even elements in the array.

Note: Return two elements where the first one in the count of odd & second one is the count of even.

Examples:

Input: arr[] = [1, 2, 3, 4, 5]
Output: 3 2
Explanation: There are 3 odd elements (1, 3, 5) and 2 even elements (2 and 4).

Input: arr[] = [1, 1]
Output: 2 0
Explanation: There are 2 odd elements (1, 1) and no even elements.

Constraints:
1 <= arr.size <= 106
1 <= arr[i] <= 106 */
#include <stdio.h>
void countOddEven(int arr[], int n, int *oddCount, int *evenCount)
{
  *oddCount = 0;
  *evenCount = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] % 2 == 0)
      (*evenCount)++;
    else
      (*oddCount)++;
  }
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int oddCount, evenCount;

  countOddEven(arr, n, &oddCount, &evenCount);

  printf("Odd count: %d\n", oddCount);
  printf("Even count: %d\n", evenCount);

  return 0;
}