/* Write a function that accepts a pointer to a Student structure
with fields for id, name, year, gpa and modifies its grades. */
#include <stdio.h>
struct Student
{
  int id;
  char name[100];
  int year;
  float gpa;
};
void modifyStudentGrades(struct Student *student)
{
  printf("Enter new GPA for student %d: ", student->id);
  scanf("%f", &student->gpa);
}
int main()
{
  struct Student student1 = {1, "Alice", 2023, 3.5};

  printf("Student Details Before Modification:\n");
  printf("ID: %d\n", student1.id);
  printf("Name: %s\n", student1.name);
  printf("Year: %d\n", student1.year);
  printf("GPA: %.2f\n\n", student1.gpa);

  modifyStudentGrades(&student1);

  printf("\nStudent Details After Modification:\n");
  printf("ID: %d\n", student1.id);
  printf("Name: %s\n", student1.name);
  printf("Year: %d\n", student1.year);
  printf("GPA: %.2f\n", student1.gpa);

  return 0;
}