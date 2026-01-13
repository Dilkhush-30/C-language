/* Create a program where you need to store and process data
for a Book with attributes like title, author, and price,
demonstrating why a structure is more suitable than separate
variables.*/
#include <stdio.h>
#include <string.h>
struct Book
{
  char title[100];
  char author[100];
  float price;
};
int main()
{
  struct Book book1, book2;

  // Input details for book1
  printf("Enter title of book 1: ");
  fgets(book1.title, sizeof(book1.title), stdin);
  book1.title[strcspn(book1.title, "\n")] = '\0'; // Remove newline

  printf("Enter author of book 1: ");
  fgets(book1.author, sizeof(book1.author), stdin);
  book1.author[strcspn(book1.author, "\n")] = '\0'; // Remove newline

  printf("Enter price of book 1: ");
  scanf("%f", &book1.price);
  getchar(); // Clear newline from buffer

  // Input details for book2
  printf("Enter title of book 2: ");
  fgets(book2.title, sizeof(book2.title), stdin);
  book2.title[strcspn(book2.title, "\n")] = '\0'; // Remove newline

  printf("Enter author of book 2: ");
  fgets(book2.author, sizeof(book2.author), stdin);
  book2.author[strcspn(book2.author, "\n")] = '\0'; // Remove newline

  printf("Enter price of book 2: ");
  scanf("%f", &book2.price);

  // Display book details
  printf("\nBook 1 Details:\n");
  printf("Title: %s\n", book1.title);
  printf("Author: %s\n", book1.author);
  printf("Price: $%.2f\n", book1.price);

  printf("\nBook 2 Details:\n");
  printf("Title: %s\n", book2.title);
  printf("Author: %s\n", book2.author);
  printf("Price: $%.2f\n", book2.price);

  return 0;
}