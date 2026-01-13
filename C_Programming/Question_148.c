/* Create a program using do-while to find
password checker until a valid password is entered. */
#include <stdio.h>
#include <string.h>

int main()
{
  char password[100];
  char valid_password[] = "password123";
  int is_valid = 0;

  do
  {
    printf("Enter the password: ");
    scanf("%s", password);
    if (strcmp(password, valid_password) == 0)
    {
      printf("Password is correct.\n");
      is_valid = 1;
    }
    else
    {
      printf("Incorrect password. Please try again.\n");
    }
  } while (!is_valid);

  return 0;
}