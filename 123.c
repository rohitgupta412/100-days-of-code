#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // For isspace

#define IN_WORD 1
#define OUT_WORD 0

int main() {
    FILE *file_ptr;
    char filename[100];
    char ch;
    int char_count = 0, word_count = 0, line_count = 0;
    int state = OUT_WORD;

    printf("Enter the filename to analyze: ");
    scanf("%s", filename);

    file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        printf("Error opening file %s.\n", filename);
        return 1;
    }

    // Read character by character until EOF
    while ((ch = fgetc(file_ptr)) != EOF) {
        char_count++;

        if (ch == '\n') {
            line_count++;
        }

        // Word counting logic
        if (isspace(ch)) {
            state = OUT_WORD;
        } else if (state == OUT_WORD) {
            state = IN_WORD;
            word_count++;
        }
    }
    
    // If the file does not end with a newline character, we still count the last line
    if (char_count > 0 && ch == EOF) {
        line_count++;
    }

    printf("\n--- File Statistics ---\n");
    printf("Characters: %d\n", char_count);
    printf("Words:      %d\n", word_count);
    printf("Lines:      %d\n", line_count);

    fclose(file_ptr);
    return 0;
}
