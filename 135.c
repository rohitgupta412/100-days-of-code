#include <stdio.h>

int main() {
    enum Codes {
        CODE_A = 10,
        CODE_B, // automatically 11
        CODE_C  // automatically 12
    };

    printf("CODE_A value: %d\n", CODE_A);
    printf("CODE_B value: %d\n", CODE_B);
    printf("CODE_C value: %d\n", CODE_C);

    return 0;
}
