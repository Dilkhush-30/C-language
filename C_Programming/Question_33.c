/* Create a program to Based on a student's score, categorize as 
"High", "Moderate", or "Low" using the ternary operator (e.g., 
High for scores > 80, Moderate for 50-80, Low for < 50). */

#include<stdio.h>
int main()
{
  int score;
  printf("Enter the Students score :");
  scanf("%d",&score);

  (score>80)? printf("The Student's score %d is High\n",score):
  (score>=50 && score<=80)? printf("The Student's score %d is Moderate\n",score):
  printf("The Student's score %d is Low\n",score);
  
  return 0;
}