#include <stdio.h>
#include <string.h>
#include <ctype.h> // For tolower()

// Function to check if a character is a vowel
int isVowel(char c) {
    c = tolower(c); // Convert to lowercase for case-insensitive check
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void removeVowels(char *str) {
    int i, j;
    int len = strlen(str);

    // j will track the position for the modified string
    // i will iterate through the original string
    for (i = 0, j = 0; i < len; i++) {
        if (!isVowel(str[i])) {
            str[j] = str[i]; // Copy non-vowel characters
            j++;
        }
    }
    str[j] = '\0'; // Null-terminate the modified string
}

int main() {
    char myString[100];

    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin); // Read input including spaces

    // Remove the newline character if present from fgets
    myString[strcspn(myString, "\n")] = '\0'; 

    removeVowels(myString);

    printf("String after removing vowels: %s\n", myString);

    return 0;
}