// Array Reverse in C Using while Loop
#include <stdio.h>

int main()
{
  int n, temp, start = 0, end;
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter %d elements: ", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  end = n - 1;

  // Reverse the array
  while (start < end)
  {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }

  printf("Reversed array: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}