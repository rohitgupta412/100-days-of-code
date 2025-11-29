#include <stdio.h>
#include <string.h>
#include <ctype.h> // For toupper() and isspace()

void printInitials(char *name) {
    if (name == NULL || strlen(name) == 0) {
        return; // Handle empty or NULL name
    }

    // Print the first initial (capitalized)
    printf("%c", toupper(name[0]));

    // Iterate through the rest of the string
    for (int i = 1; i < strlen(name); i++) {
        // If the current character is a letter and the previous character was a space
        if (isalpha(name[i]) && isspace(name[i - 1])) {
            printf("%c", toupper(name[i]));
        }
    }
    printf("\n"); // Newline after printing initials
}

int main() {
    char name1[] = "John Doe";
    char name2[] = "Alice Wonderland";
    char name3[] = "peter pan";
    char name4[] = "  leading space example  "; // Example with leading/trailing spaces

    printf("Initials for \"%s\": ", name1);
    printInitials(name1);

    printf("Initials for \"%s\": ", name2);
    printInitials(name2);

    printf("Initials for \"%s\": ", name3);
    printInitials(name3);

    printf("Initials for \"%s\": ", name4);
    printInitials(name4);

    return 0;
}