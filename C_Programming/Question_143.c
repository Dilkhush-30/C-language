/*Create a simple text-based user login system
that compares a stored password string using strcmp.*/
#include <stdio.h>
#include <string.h>
int main()
{
  const char stored_password[] = "securepassword";
  char input_password[100];

  printf("Enter your password: ");
  fgets(input_password, sizeof(input_password), stdin);

  // Remove newline character from input if present
  size_t len = strlen(input_password);
  if (len > 0 && input_password[len - 1] == '\n')
  {
    input_password[len - 1] = '\0';
  }

  // Compare the input password with the stored password
  if (strcmp(input_password, stored_password) == 0)
  {
    printf("Login successful!\n");
  }
  else
  {
    printf("Login failed! Incorrect password.\n");
  }

  return 0;
}