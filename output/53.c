#include <stdio.h>

int main() {
    int i, j, k;
    int num_rows = 5; // Number of rows for the upper half of the diamond

    // Upper half of the diamond
    for (i = 1; i <= num_rows; i++) {
        // Print leading spaces
        for (k = 1; k <= num_rows - i; k++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (i = num_rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (k = 1; k <= num_rows - i; k++) {
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