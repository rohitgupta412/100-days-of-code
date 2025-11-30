#include <stdio.h>

int main() {
    enum Status {
        SUCCESS,
        FAILURE,
        TIMEOUT
    };

    enum Status current_status;
    int input;

    printf("Enter a status code (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    if (scanf("%d", &input) != 1) {
         printf("Invalid input.\n");
        return 1;
    }
    current_status = (enum Status)input;

    switch (current_status) {
        case SUCCESS:
            printf("Operation successful.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
    }

    return 0;
}
