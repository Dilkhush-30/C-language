/*write a program to print the following series
1 2 3 4 5 6 7 8 9 10
1 4 9 16 25 36 49 64 81 100
3 6 11 18 27 38 51 66 83 102 */

#include <stdio.h>

int main() {
    int i, j;

    // Print the first row (1 to 10)
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Print the squares from 1 to 10 (1^2 to 10^2)
    for (i = 1; i <= 10; i++) {
        printf("%d ", i * i);
    }
    printf("\n");

    // Print cubes from 1 to 10 (1^3 to 10^3)
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i * i - 1 + 3);
    }
    printf("\n");

    return 0;
}
