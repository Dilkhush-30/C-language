/* Initialize an array of Book structures with different data for
each book using designated initializers. */
#include <stdio.h>
struct Book
{
  char title[100];
  char author[100];
  float price;
};
int main()
{
  struct Book books[3] = {
      {.title = "The Great Gatsby", .author = "F. Scott Fitzgerald", .price = 10.99},
      {.title = "1984", .author = "George Orwell", .price = 8.99},
      {.title = "To Kill a Mockingbird", .author = "Harper Lee", .price = 12.49}};

  // Display book details
  for (int i = 0; i < 3; i++)
  {
    printf("Book %d Details:\n", i + 1);
    printf("Title: %s\n", books[i].title);
    printf("Author: %s\n", books[i].author);
    printf("Price: $%.2f\n\n", books[i].price);
  }

  return 0;
}