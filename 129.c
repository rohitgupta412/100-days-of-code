#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_ptr;
    const char* filename = "numbers.txt";
    int num, sum = 0, count = 0;
    float average = 0.0;

    // NOTE: Ensure 'numbers.txt' exists and contains space-separated integers
    // e.g., "10 20 30 45 5"

    file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        printf("Error opening file %s.\n", filename);
        return 1;
    }

    // Read integers one by one using fscanf
    while (fscanf(file_ptr, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    if (count > 0) {
        average = (float)sum / count;
        printf("\n--- Results from %s ---\n", filename);
        printf("Total Integers Read: %d\n", count);
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("No integers found in the file or the file was empty.\n");
    }

    fclose(file_ptr);
    return 0;
}
