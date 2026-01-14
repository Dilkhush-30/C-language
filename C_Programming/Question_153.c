/* Pass a Car structure to a function that prints out a description
of the car in one complete sentence. */
#include <stdio.h>
#include <string.h>
struct Car
{
  char make[50];
  char model[50];
  int year;
  char color[30];
};
void printCarDescription(struct Car car)
{
  printf("This car is a %d %s %s in %s color.\n", car.year, car.make, car.model, car.color);
}
int main()
{
  struct Car myCar;

  // Input details for myCar
  printf("Enter make of your car: ");
  fgets(myCar.make, sizeof(myCar.make), stdin);
  myCar.make[strcspn(myCar.make, "\n")] = '\0'; // Remove newline

  printf("Enter model of your car: ");
  fgets(myCar.model, sizeof(myCar.model), stdin);
  myCar.model[strcspn(myCar.model, "\n")] = '\0'; // Remove newline

  printf("Enter year of your car: ");
  scanf("%d", &myCar.year);
  getchar(); // Clear newline from buffer

  printf("Enter color of your car: ");
  fgets(myCar.color, sizeof(myCar.color), stdin);
  myCar.color[strcspn(myCar.color, "\n")] = '\0'; // Remove newline

  // Print car description
  printCarDescription(myCar);

  return 0;
}