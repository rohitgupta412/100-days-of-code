#include <stdio.h>

int main() {
    enum Operation {
        ADD = 1, // Start at 1 for easier user input mapping
        SUBTRACT,
        MULTIPLY
    };

    enum Operation choice;
    int a, b, result;
    int input_choice;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Choose an operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n");
    printf("Enter choice (1-3): ");
    if (scanf("%d", &input_choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    choice = (enum Operation)input_choice;

    switch (choice) {
        case ADD:
            result = a + b;
            printf("Result: %d + %d = %d\n", a, b, result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result: %d - %d = %d\n", a, b, result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result: %d * %d = %d\n", a, b, result);
            break;
        default:
            printf("Invalid operation choice.\n");
    }

    return 0;
}
