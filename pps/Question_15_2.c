// W.A.P in c to find the any given character is present in the given char array or not.
#include <stdio.h>
int main()
{
  char arr[] = {'a', 'e', 'i', 'o', 'u'};
  char ch;
  int found = 0;
  int size = sizeof(arr) / sizeof(arr[0]);
  printf("Enter a character to search: ");
  scanf(" %c", &ch);
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == ch)
    {
      found = 1;
      break;
    }
  }
  if (found)
    printf("'%c' is present in the array.", ch);
  else
    printf("'%c' is not present in the array.", ch);
  return 0;
}