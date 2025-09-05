/*  Define variables for storing a user's first name, last name, and age 
using appropriate naming conventions and then display them. */

#include<stdio.h>
int main()
{
  char FirstName[30];
  char LastName[30];
  int age;

  printf("Enter Your First Name : ");
  scanf("%s",FirstName);

  printf("Enter Your Last Name :");
  scanf("%s",LastName);

  printf("Enter Your Age :");
  scanf("%d",&age);

  printf("First Name : %s\n",FirstName);
  printf("Last Name : %s\n",LastName);
  printf("Age : %d",age);

  return 0;

}