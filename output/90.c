#include <stdio.h>
#include <ctype.h>

void toggleCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        // Non-alphabetic characters (like numbers or symbols) are left unchanged.
    }
}

int main() {
    char str[] = "HeLlO wOrLd 123!";
    printf("Original string: %s\n", str);

    toggleCase(str);
    printf("Toggled case: %s\n", str);

    return 0;
}
