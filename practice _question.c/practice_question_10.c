/*write a program to calculate the grade of an employee depending upon the given basic salary
{Grade A for salary above 5000,B for salary more than 3000 and lesser than or equal to 5000 and C for salary lesser than or equal to 3000}*/

#include <stdio.h>

int main() 
{
    int salary;

    printf("Enter the basic Salary: ");
    scanf("%d", &salary); 

    if (salary > 5000) 
    {
        printf("Employee Grade: A\n"); 
    } 
    else if (salary <= 5000 && salary > 3000) 
    {
        printf("Employee Grade: B\n");
    } 
    else 
    {
        printf("Employee Grade: C\n");
    }

    return 0;
}
