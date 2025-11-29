#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countCharacters(const char *str) {
    int spaces = 0;
    int digits = 0;
    int special_chars = 0; // Everything else that's printable

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            spaces++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (isgraph(str[i])) { // isgraph checks for printable chars except space
            special_chars++;
        }
        // Non-printable characters (like '\n' or control chars) are ignored here.
    }

    printf("String: \"%s\"\n", str);
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special_chars);
}

int main() {
    char str[] = "Hello World! 123 @#$";
    countCharacters(str);
    return 0;
}
