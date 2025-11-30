#include <stdio.h>

int main() {
    enum Color {
        RED,
        GREEN,
        BLUE,
        COLOR_COUNT // Helper to define the number of items
    };

    // Array of strings mapping to the enum indices
    const char* color_names[] = {
        "RED",
        "GREEN",
        "BLUE"
    };

    printf("Enum values using a loop:\n");
    // Loop from the first value (0) up to the count
    for (int i = RED; i < COLOR_COUNT; i++) {
        // Cast the loop index back to the enum type for use
        enum Color c = (enum Color)i;
        printf("Name: %s, Value: %d\n", color_names[c], c);
    }

    return 0;
}
