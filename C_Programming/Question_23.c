/*Create a program to convert Fahrenheit to Celsius
°C = (°F - 32) × 5/9 */

#include<stdio.h>
int main()
{
  float fahrenheit,celsius;
  printf("Enter temperature in fahrenheit :");
  scanf("%f",&fahrenheit);
  celsius = (fahrenheit -32)*5/9;
  printf("Temperature in celsius is : %2f",celsius);
  return 0;
}