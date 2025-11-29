#include <stdio.h>
#include <string.h>

void printAllSubstrings(char *str) {
    int n = strlen(str);

    // Outer loop for the starting index of the substring
    for (int i = 0; i < n; i++) {
        // Inner loop for the ending index of the substring
        for (int j = i; j < n; j++) {
            // Loop to print characters from the starting index 'i' to the ending index 'j'
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            puts(""); // Print a newline after each substring
        }
    }
}

int main() {
    char str[] = "abc";
    printf("All substrings of \"%s\":\n", str);
    printAllSubstrings(str);
    return 0;
}