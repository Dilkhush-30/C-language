/*  Write a function where the Student structure also has books
they have borrowed inside, showing nested structure usage. */
#include <stdio.h>
#include <string.h>
struct Book
{
  char title[100];
  char author[100];
  float price;
};
struct Student
{
  int id;
  char name[100];
  int year;
  float gpa;
  struct Book borrowedBooks[5]; // Array to hold borrowed books
  int bookCount;                // Number of books borrowed
};
void printStudentDetails(struct Student student)
{
  printf("Student ID: %d\n", student.id);
  printf("Name: %s\n", student.name);
  printf("Year: %d\n", student.year);
  printf("GPA: %.2f\n", student.gpa);
  printf("Borrowed Books (%d):\n", student.bookCount);
  for (int i = 0; i < student.bookCount; i++)
  {
    printf("  Book %d: %s by %s, Price: $%.2f\n", i + 1, student.borrowedBooks[i].title,
           student.borrowedBooks[i].author, student.borrowedBooks[i].price);
  }
}
int main()
{
  struct Student student1;
  student1.id = 101;
  strcpy(student1.name, "John Doe");
  student1.year = 2;
  student1.gpa = 3.8;

  // Input borrowed books
  printf("Enter number of books borrowed by %s (max 5): ", student1.name);
  scanf("%d", &student1.bookCount);
  getchar(); // Clear newline from buffer

  for (int i = 0; i < student1.bookCount; i++)
  {
    printf("Enter title of book %d: ", i + 1);
    fgets(student1.borrowedBooks[i].title, sizeof(student1.borrowedBooks[i].title), stdin);
    student1.borrowedBooks[i].title[strcspn(student1.borrowedBooks[i].title, "\n")] = '\0'; // Remove newline

    printf("Enter author of book %d: ", i + 1);
    fgets(student1.borrowedBooks[i].author, sizeof(student1.borrowedBooks[i].author), stdin);
    student1.borrowedBooks[i].author[strcspn(student1.borrowedBooks[i].author, "\n")] = '\0'; // Remove newline

    printf("Enter price of book %d: ", i + 1);
    scanf("%f", &student1.borrowedBooks[i].price);
    getchar(); // Clear newline from buffer
  }

  // Print student details
  printStudentDetails(student1);

  return 0;
}