#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function definition that accepts a struct by value
void printStudentDetails(struct Student s) {
    printf("\n--- Student Details (via function) ---\n");
    printf("Name: %s", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1;

    // Get input from user
    printf("Enter student name: ");
    fgets(s1.name, 50, stdin); 
    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    
    // Pass the struct to the function
    printStudentDetails(s1);

    return 0;
}
