/*Use calloc to allocate an array for a set of char characters
representing a sentence, ensuring all the memory is initialized
to zero.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, i;
  char *sentence;

  // Input number of characters for the sentence
  printf("Enter the number of characters for the sentence: ");
  scanf("%d", &n);
  getchar(); // Clear newline from buffer

  // Dynamically allocate memory for n characters using calloc
  sentence = (char *)calloc(n, sizeof(char));
  if (sentence == NULL)
  {
    printf("Memory allocation failed\n");
    return 1;
  }

  // Input the sentence
  printf("Enter the sentence: ");
  fgets(sentence, n, stdin);

  // Display the entered sentence
  printf("\nYou entered the following sentence:\n");
  printf("%s\n", sentence);

  // Free allocated memory
  free(sentence);
  return 0;
}