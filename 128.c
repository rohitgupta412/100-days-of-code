#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // For tolower, isalpha

int main() {
    FILE *file_ptr;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;

    printf("Enter the filename to analyze: ");
    scanf("%s", filename);

    file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        printf("Error opening file %s.\n", filename);
        return 1;
    }

    while ((ch = fgetc(file_ptr)) != EOF) {
        ch = tolower(ch); // Convert to lowercase for easy comparison

        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        // Ignore digits, spaces, and special characters
    }

    printf("\n--- Vowel/Consonant Count ---\n");
    printf("Vowels:      %d\n", vowels);
    printf("Consonants:  %d\n", consonants);
    printf("Total letters: %d\n", vowels + consonants);

    fclose(file_ptr);
    return 0;
}
