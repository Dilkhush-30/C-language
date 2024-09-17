/*write a program to print the following series
1 2 3 4 5 6 7 8 9 10
1 4 9 16 25 36 49 64 81 100
3 6 11 18 27 38 51 66 83 102 */

#include <stdio.h>

void printSeries1(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void printSeries2(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
}

void printSeries3(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * i - 1 + 3);
    }
    printf("\n");
}

int main() {
    int n = 10;  // length of the series

    printSeries1(n);
    printSeries2(n);
    printSeries3(n);

    return 0;
}
