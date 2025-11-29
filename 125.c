#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

int main() {
    FILE *file_ptr;
    char filename[100];
    char new_line[MAX_LINE_LENGTH];

    printf("Enter filename to append to: ");
    scanf("%s", filename);
    // Consume the newline left by scanf for the next fgets call
    while(getchar() != '\n'); 

    // Open file in append mode
    file_ptr = fopen(filename, "a");

    if (file_ptr == NULL) {
        printf("Error opening file %s for appending.\n", filename);
        return 1;
    }

    printf("Enter the line to append (max %d chars):\n", MAX_LINE_LENGTH - 1);
    // Use fgets to read the entire line including spaces
    if (fgets(new_line, MAX_LINE_LENGTH, stdin) != NULL) {
        // Ensure the line ends with a newline character if it was full
        if (new_line[strlen(new_line) - 1] != '\n') {
            fprintf(file_ptr, "\n");
        }
        fprintf(file_ptr, "%s", new_line);
        printf("\nText successfully appended to %s.\n", filename);
    } else {
        printf("Error reading input.\n");
    }

    fclose(file_ptr);
    return 0;
}
