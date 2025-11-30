#include <stdio.h>

int main() {
    enum Level {
        LOW = 5,
        MEDIUM = 10,
        HIGH = 15
    };

    // Store enum values in integer variables
    int low_val = LOW;
    int medium_val = MEDIUM;
    int high_val = HIGH;

    printf("The enum values are fundamentally integers:\n");
    printf("LOW is an integer with value: %d\n", low_val);
    printf("MEDIUM is an integer with value: %d\n", medium_val);
    printf("HIGH is an integer with value: %d\n", high_val);

    // We can also directly assign integers to enum variables
    enum Level test_level = 10;
    printf("An enum variable assigned '10' holds value: %d (which is MEDIUM)\n", test_level);


    return 0;
}
