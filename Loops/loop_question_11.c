/*write a program to print the following series
1 2 3 4 5 6 7 8 9 10
1 4 9 16 25 36 49 64 81 100
3 6 11 18 27 38 51 66 83 102 */

#include <stdio.h>
int main() {
    // Question 1
    int i = 1;
    for (int k = 0; k < 10; k++) {
        printf("%d ", i);
        i += 1;
    }
    printf("\n");

    // Question 2
    i = 1;
    int j = 3;
    for (int k = 0; k < 10; k++) {
        printf("%d ", i);
        i += j;
        j += 2;
    }
    printf("\n");

    // Question 3
    i = 3;
    j = 3;
    for (int k = 0; k < 10; k++) {
        printf("%d ", i);
        i += j;
        j += 2;
    }
    printf("\n");
    
    return 0;
}
