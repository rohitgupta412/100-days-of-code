#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100]; // Declare a character array to store the name
    int i, last_space_index = -1;

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin); // Read the full name including spaces

    // Remove trailing newline character if present from fgets
    name[strcspn(name, "\n")] = 0;

    // Print the first initial
    if (strlen(name) > 0 && isalpha(name[0])) {
        printf("%c. ", toupper(name[0]));
    }

    // Find the last space to identify the surname
    for (i = 0; i < strlen(name); i++) {
        if (isspace(name[i])) {
            last_space_index = i;
        }
    }

    // Print initials of middle names
    for (i = 1; i < last_space_index; i++) {
        if (isspace(name[i]) && isalpha(name[i + 1])) {
            printf("%c. ", toupper(name[i + 1]));
        }
    }

    // Print the full surname
    if (last_space_index != -1) {
        // Skip leading spaces in the surname part
        i = last_space_index + 1;
        while (isspace(name[i]) && name[i] != '\0') {
            i++;
        }
        // Print the surname with the first letter capitalized
        if (isalpha(name[i])) {
            printf("%c", toupper(name[i]));
            i++;
        }
        while (name[i] != '\0') {
            printf("%c", tolower(name[i]));
            i++;
        }
    }
    printf("\n");

    return 0;
}