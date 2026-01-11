// Use printf with format specifiers to format and print a date string (day,month, year).
#include <stdio.h>
int main()
{
  int day, month, year;
  printf("Enter day: ");
  scanf("%d", &day);
  printf("Enter month: ");
  scanf("%d", &month);
  printf("Enter year: ");
  scanf("%d", &year);

  printf("Formatted date: %02d/%02d/%04d\n", day, month, year);

  return 0;
}