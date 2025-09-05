/* Create a program to calculate simple interest.
 Simple Interest = (P x T x R)/100 */

 #include<stdio.h>
 int main()
 {
  float P,T,R,SI;
  printf("Enter principle amount :");
  scanf("%f",&P);
  printf("Enter time in years :");
  scanf("%f",&T);
  printf("Enter rate of intrest :");
  scanf("%f",&R);

  SI = (P * T * R)/100;
  printf("Simple intrest is : %2f",SI);

  return 0;
 }