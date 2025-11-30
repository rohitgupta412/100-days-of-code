#include <stdio.h>

int main() {
    enum Month {
        JANUARY = 1, // Start from 1 for natural month numbering
        FEBRUARY,
        MARCH,
        APRIL,
        MAY,
        JUNE,
        JULY,
        AUGUST,
        SEPTEMBER,
        OCTOBER,
        NOVEMBER,
        DECEMBER
    };

    enum Month current_month;
    int days = 0;
    int input_month;

    printf("Enter a month number (1-12): ");
    if (scanf("%d", &input_month) != 1 || input_month < 1 || input_month > 12) {
        printf("Invalid month input.\n");
        return 1;
    }
    current_month = (enum Month)input_month;

    switch (current_month) {
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            days = 30;
            break;
        case FEBRUARY:
            days = 28; // Simple case, ignoring leap years
            break;
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            days = 31;
            break;
    }

    printf("Month %d has %d days.\n", current_month, days);

    return 0;
}
