#include <stdio.h>

int main() {
    int rows = 4; // Number of rows in the upper half (including the middle row)
    int i, j;

    // Upper half of the diamond
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}