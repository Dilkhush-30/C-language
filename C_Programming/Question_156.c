/*Create a program that dynamically allocates memory for a Car
structure and then free it at the end of the program. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Car
{
  char make[50];
  char model[50];
  int year;
  float price;
};
int main()
{
  struct Car *myCar = (struct Car *)malloc(sizeof(struct Car));
  if (myCar == NULL)
  {
    printf("Memory allocation failed\n");
    return 1;
  }

  // Input car details
  printf("Enter car make: ");
  fgets(myCar->make, sizeof(myCar->make), stdin);
  myCar->make[strcspn(myCar->make, "\n")] = '\0'; // Remove newline

  printf("Enter car model: ");
  fgets(myCar->model, sizeof(myCar->model), stdin);
  myCar->model[strcspn(myCar->model, "\n")] = '\0'; // Remove newline

  printf("Enter car year: ");
  scanf("%d", &myCar->year);

  printf("Enter car price: ");
  scanf("%f", &myCar->price);

  // Display car details
  printf("\nCar Details:\n");
  printf("Make: %s\n", myCar->make);
  printf("Model: %s\n", myCar->model);
  printf("Year: %d\n", myCar->year);
  printf("Price: $%.2f\n", myCar->price);

  // Free allocated memory
  free(myCar);
  return 0;
}