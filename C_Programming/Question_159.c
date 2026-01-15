/*Allocate memory for a struct representing a Point with x and y
coordinates, set some values, and then properly deallocate
the memory using free.*/
#include <stdio.h>
#include <stdlib.h>
struct Point
{
  int x;
  int y;
};
int main()
{
  struct Point *p = (struct Point *)malloc(sizeof(struct Point));
  if (p == NULL)
  {
    printf("Memory allocation failed\n");
    return 1;
  }

  // Set values for the point
  p->x = 10;
  p->y = 20;

  // Display the point coordinates
  printf("Point coordinates: (%d, %d)\n", p->x, p->y);

  // Free allocated memory
  free(p);
  return 0;
}