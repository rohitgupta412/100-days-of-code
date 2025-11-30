#include <stdio.h>

int main() {
    enum Day {
        SUNDAY,    // 0
        MONDAY,    // 1
        TUESDAY,   // 2
        WEDNESDAY, // 3
        THURSDAY,  // 4
        FRIDAY,    // 5
        SATURDAY   // 6
    };

    printf("Day and its integer value:\n");
    // We manually print each value here as C enums don't automatically iterate easily
    printf("SUNDAY: %d\n", SUNDAY);
    printf("MONDAY: %d\n", MONDAY);
    printf("TUESDAY: %d\n", TUESDAY);
    printf("WEDNESDAY: %d\n", WEDNESDAY);
    printf("THURSDAY: %d\n", THURSDAY);
    printf("FRIDAY: %d\n", FRIDAY);
    printf("SATURDAY: %d\n", SATURDAY);

    return 0;
}
