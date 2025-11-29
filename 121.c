#include <stdio.h>
#include <stdlib.h> // Required for exit() or EXIT_FAILURE

#define BUFFER_SIZE 256 // Define a buffer size to store each line

int main() {
    FILE *file_pointer; // File pointer
    char buffer[BUFFER_SIZE]; // Character array (buffer) to store each line
    char filename[100]; // Character array to store the filename from user input

    // 1. Prompt user for the filename
    printf("Enter the name of the file to read (e.g., info.txt): ");
    // Use fgets for safer input reading from stdin (standard input)
    if (fgets(filename, sizeof(filename), stdin) == NULL) {
        fprintf(stderr, "Error reading filename from input.\n");
        return EXIT_FAILURE;
    }
    // Remove the trailing newline character from the filename if present
    // This is necessary because fgets includes the newline in the buffer
    int i = 0;
    while (filename[i] != '\n' && filename[i] != '\0') {
        i++;
    }
    filename[i] = '\0';

    // 2. Open the file in read mode ("r")
    file_pointer = fopen(filename, "r");

    // 3. Check if the file was opened successfully
    if (file_pointer == NULL) {
        // Print an error message to standard error stream and exit
        fprintf(stderr, "Error: Could not open file %s\n", filename);
        return EXIT_FAILURE;
    }

    printf("\n--- Contents of %s ---\n", filename);

    // 4. Read and print file contents line by line using a while loop
    // The loop continues as long as fgets successfully reads a line (does not return NULL)
    while (fgets(buffer, BUFFER_SIZE, file_pointer) != NULL) {
        printf("%s", buffer); // Print the line to the console
    }

    // 5. Close the file
    fclose(file_pointer);

    printf("\n--- End of file ---\n");

    return 0;
}
