#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Required for general utility

#define ALPHABET_SIZE 26
#define MAX_LEN 100

void solveQ115() {
    char s[MAX_LEN], t[MAX_LEN];
    int countS[ALPHABET_SIZE] = {0};
    int countT[ALPHABET_SIZE] = {0};
    int i, isAnagram = 1;

    printf("Q115: Enter first string (lowercase): ");
    scanf("%s", s);
    printf("Q115: Enter second string (lowercase): ");
    scanf("%s", t);

    if (strlen(s) != strlen(t)) {
        isAnagram = 0;
    } else {
        // Count character frequencies in s
        for (i = 0; s[i] != '\0'; i++) {
            countS[s[i] - 'a']++;
        }
        // Count character frequencies in t
        for (i = 0; t[i] != '\0'; i++) {
            countT[t[i] - 'a']++;
        }
        // Compare frequency arrays
        for (i = 0; i < ALPHABET_SIZE; i++) {
            if (countS[i] != countT[i]) {
                isAnagram = 0;
                break;
            }
        }
    }

    if (isAnagram) {
        printf("Anagram\n\n");
    } else {
        printf("Not Anagram\n\n");
    }
}
