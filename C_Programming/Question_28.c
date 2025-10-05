/* .Create a program that calculates grades based on marks
A -> above 90%
B -> above 75%
C -> above 60%
D -> above 30%
F -> below 30% */
#include <stdio.h>
int main()
{
  int marks;

  printf("Enter your marks: ");
  scanf("%d", &marks);

  if (marks > 90)
  {
    printf("Your grade is A.\n");
  }
  else if (marks > 75)
  {
    printf("Your grade is B.\n");
  }
  else if (marks > 60)
  {
    printf("Your grade is C.\n");
  }
  else if (marks > 30)
  {
    printf("Your grade is D.\n");
  }
  else
  {
    printf("Your grade is F.\n");
  }

  return 0;
}