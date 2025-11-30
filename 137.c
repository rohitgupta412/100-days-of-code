#include <stdio.h>

int main() {
    enum Role {
        GUEST,
        USER,
        ADMIN
    };

    enum Role user_role;
    int input_role;

    printf("Enter user role (0=GUEST, 1=USER, 2=ADMIN): ");
    if (scanf("%d", &input_role) != 1) {
         printf("Invalid input.\n");
        return 1;
    }
    user_role = (enum Role)input_role;

    switch (user_role) {
        case GUEST:
            printf("Welcome guest. Limited access granted.\n");
            break;
        case USER:
            printf("Welcome user. Standard access granted.\n");
            break;
        case ADMIN:
            printf("Welcome administrator. Full system access granted.\n");
            break;
        default:
            printf("Unknown role.\n");
    }

    return 0;
}
