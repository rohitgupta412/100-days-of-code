#include <stdio.h>

int main() {
    int i, j;

    // First line: 1 asterisk
    for (j = 1; j <= 1; j++) {
        printf("*");
    }
    printf("\n\n"); // Two newlines for the blank line

    // Second block: 3 asterisks
    for (j = 1; j <= 3; j++) {
        printf("*");
    }
    printf("\n\n"); // Two newlines for the blank line

    // Third block: 5 asterisks
    for (j = 1; j <= 5; j++) {
        printf("*");
    }
    printf("\n\n"); // Two newlines for the blank line

    // Fourth block: 3 asterisks
    for (j = 1; j <= 3; j++) {
        printf("*");
    }
    printf("\n\n"); // Two newlines for the blank line

    // Fifth block: 1 asterisk
    for (j = 1; j <= 1; j++) {
        printf("*");
    }
    printf("\n"); // Single newline at the end

    return 0;
}