#include <stdio.h>
#include <string.h> // Required for strcpy

// Define an enumeration for status
enum Status {
    ACTIVE,
    INACTIVE,
    PENDING
};

// Define a structure
struct Student {
    char name[50];
    int age;
    enum Status studentStatus; // Using the enum inside the struct
};

int main() {
    // Declare a struct variable
    struct Student s1;

    // Declare a pointer to the struct
    struct Student *ptr_s1;

    // Assign the address of s1 to the pointer
    ptr_s1 = &s1;

    // Take input from the user to modify struct members via the pointer
    printf("Enter student name: ");
    fgets(ptr_s1->name, sizeof(ptr_s1->name), stdin);
    // Remove the trailing newline character if present
    ptr_s1->name[strcspn(ptr_s1->name, "\n")] = 0;

    printf("Enter student age: ");
    scanf("%d", &ptr_s1->age);

    // Consume the leftover newline character from scanf
    while (getchar() != '\n'); 

    int statusChoice;
    printf("Enter student status (0 for ACTIVE, 1 for INACTIVE, 2 for PENDING): ");
    scanf("%d", &statusChoice);
    ptr_s1->studentStatus = (enum Status)statusChoice;

    // Display data using the pointer and -> operator
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", ptr_s1->name);
    printf("Age: %d\n", ptr_s1->age);
    printf("Status: ");
    switch (ptr_s1->studentStatus) {
        case ACTIVE:
            printf("ACTIVE\n");
            break;
        case INACTIVE:
            printf("INACTIVE\n");
            break;
        case PENDING:
            printf("PENDING\n");
            break;
        default:
            printf("UNKNOWN\n");
            break;
    }

    return 0;
}