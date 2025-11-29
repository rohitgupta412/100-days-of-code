#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 1; i <= 5; i++) { // Outer loop for rows
        // Print leading spaces
        for (k = 1; k <= 5 - i; k++) {
            printf(" ");
        }
        // Print numbers
        for (j = 6 - i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Newline after each row
    }
    return 0;
}