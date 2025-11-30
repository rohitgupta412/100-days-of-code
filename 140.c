#include <stdio.h>

// Define the enum for Gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define the struct Person
struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p1;
    int genderChoice;

    printf("Enter person's name: ");
    fgets(p1.name, 50, stdin); // Use fgets for safer string input

    printf("Select Gender (0 for Male, 1 for Female, 2 for Other): ");
    scanf("%d", &genderChoice);
    p1.gender = (enum Gender)genderChoice;

    printf("\nPerson Details:\n");
    // Print name (remove trailing newline added by fgets if necessary)
    printf("Name: %s", p1.name);
    // Print gender using a switch for clear output
    switch (p1.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;
        case FEMALE:
            printf("Gender: Female\n");
            break;
        case OTHER:
            printf("Gender: Other\n");
            break;
    }

    return 0;
}
