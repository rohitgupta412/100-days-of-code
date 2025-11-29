#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

int main() {
    FILE *file_ptr;
    char buffer[BUFFER_SIZE];
    const char* filename = "info.txt"; // Ensure this file exists for the program to run

    // Open file in read mode
    file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        printf("Error opening file %s.\n", filename);
        return 1;
    }

    printf("--- Content of %s ---\n", filename);
    // Read and print lines until the end of the file
    while (fgets(buffer, BUFFER_SIZE, file_ptr) != NULL) {
        printf("%s", buffer);
    }
    printf("---------------------------\n");

    // Close the file
    fclose(file_ptr);

    return 0;
}
