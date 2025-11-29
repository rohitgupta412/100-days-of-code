#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_ptr;
    char filename[100];
    char ch;

    printf("Enter the filename to check and display: ");
    scanf("%s", filename);

    // Try to open in read mode
    file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        // NULL indicates the file doesn't exist or cannot be opened
        printf("\nError: File '%s' not found or cannot be opened.\n", filename);
    } else {
        printf("\n--- Content of %s ---\n", filename);
        // Read and display content character by character
        while ((ch = fgetc(file_ptr)) != EOF) {
            putchar(ch);
        }
        printf("---------------------------\n");
        fclose(file_ptr);
    }

    return 0;
}
