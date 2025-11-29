#include <stdio.h>
#include <string.h>

char findFirstRepeatingChar(const char *str) {
    int charCount[26] = {0}; // Initialize all counts to 0

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            charCount[str[i] - 'a']++;
            if (charCount[str[i] - 'a'] > 1) {
                return str[i];
            }
        }
    }
    return '\0'; // No repeating character found
}

int main() {
    char str1[] = "programming";
    char str2[] = "abcdefg";
    char str3[] = "hello";

    printf("First repeating char in \"%s\": %c\n", str1, findFirstRepeatingChar(str1)); // Output: r
    printf("First repeating char in \"%s\": %c\n", str2, findFirstRepeatingChar(str2)); // Output: (null character)
    printf("First repeating char in \"%s\": %c\n", str3, findFirstRepeatingChar(str3)); // Output: l

    return 0;
}