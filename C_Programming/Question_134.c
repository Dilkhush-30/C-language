// Create a program to check is the array is palindrome or not.
#include <stdio.h>
int main()
{
  int n, i, isPalindrome = 1;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d elements:\n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < n / 2; i++)
  {
    if (arr[i] != arr[n - i - 1])
    {
      isPalindrome = 0;
      break;
    }
  }
  if (isPalindrome)
  {
    printf("The array is a palindrome.\n");
  }
  else
  {
    printf("The array is not a palindrome.\n");
  }
  return 0;
}