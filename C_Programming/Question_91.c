// write a progrm to check even or odd don't use % or & operator
#include <stdio.h>
int main()
{
  int num;
  printf("Enter an integer: ");
  scanf("%d", &num);

  if ((num / 2) * 2 == num)
    printf("%d is even.\n", num);
  else
    printf("%d is odd.\n", num);

  return 0;
}