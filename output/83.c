#include <stdio.h>
#include <ctype.h>

void countVowelsAndConsonants(char *str) {
    int vowels = 0;
    int consonants = 0;
    int i = 0;

    while (str[i] != '\0') {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
}
