/* .Create a program to calculate Compound interest.
Compound Interest = P(1 + R/100)t */

#include<stdio.h>
#include<math.h>
int main()
{
  int P,T,R,CI;
  printf("Enter principle amount :");
  scanf("%d",&P);
  printf("Enter time in years :");
  scanf("%d",&T);
  printf("Enter rate of intrest :");
  scanf("%d",&R);

  CI = P * (pow((1+R/100),T));
  printf("Compound intrest is : %d",CI);

  return 0;
}