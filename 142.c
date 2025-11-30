#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("--- Enter details for student %d ---\n", i + 1);
        // Clear buffer if needed from previous run
        if (i > 0) while (getchar() != '\n'); 

        printf("Enter name: ");
        fgets(students[i].name, 50, stdin);
        
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);
        
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- Stored Student Details ---\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Name: %s", students[i].name);
        printf("  Roll No: %d\n", students[i].roll_no);
        printf("  Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
