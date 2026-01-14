// Define a Car structure with fields for make, model, year, and color.
#include <stdio.h>
#include <string.h>
struct Car
{
  char make[50];
  char model[50];
  int year;
  char color[30];
};
int main()
{
  struct Car car1, car2;

  // Input details for car1
  printf("Enter make of car 1: ");
  fgets(car1.make, sizeof(car1.make), stdin);
  car1.make[strcspn(car1.make, "\n")] = '\0'; // Remove newline

  printf("Enter model of car 1: ");
  fgets(car1.model, sizeof(car1.model), stdin);
  car1.model[strcspn(car1.model, "\n")] = '\0'; // Remove newline

  printf("Enter year of car 1: ");
  scanf("%d", &car1.year);
  getchar(); // Clear newline from buffer

  printf("Enter color of car 1: ");
  fgets(car1.color, sizeof(car1.color), stdin);
  car1.color[strcspn(car1.color, "\n")] = '\0'; // Remove newline

  // Input details for car2
  printf("Enter make of car 2: ");
  fgets(car2.make, sizeof(car2.make), stdin);
  car2.make[strcspn(car2.make, "\n")] = '\0'; // Remove newline

  printf("Enter model of car 2: ");
  fgets(car2.model, sizeof(car2.model), stdin);
  car2.model[strcspn(car2.model, "\n")] = '\0'; // Remove newline

  printf("Enter year of car 2: ");
  scanf("%d", &car2.year);
  getchar(); // Clear newline from buffer

  printf("Enter color of car 2: ");
  fgets(car2.color, sizeof(car2.color), stdin);
  car2.color[strcspn(car2.color, "\n")] = '\0'; // Remove newline

  // Display car details
  printf("\nCar 1 Details:\n");
  printf("Make: %s\n", car1.make);
  printf("Model: %s\n", car1.model);
  printf("Year: %d\n", car1.year);
  printf("Color: %s\n", car1.color);

  printf("\nCar 2 Details:\n");
  printf("Make: %s\n", car2.make);
  printf("Model: %s\n", car2.model);
  printf("Year: %d\n", car2.year);
  printf("Color: %s\n", car2.color);
  return 0;
}