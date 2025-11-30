#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};


struct Student getTopStudentDetails() {
    struct Student topStudent;
    
    
    printf("--- Populating a 'top student' in a function ---\n");
    printf("Enter the name of the top student: ");
    
    while (getchar() != '\n'); 
    fgets(topStudent.name, 50, stdin);
    
    printf("Enter their roll number: ");
    scanf("%d", &topStudent.roll_no);
    
    printf("Enter their marks: ");
    scanf("%f", &topStudent.marks);

    return topStudent; // Returns a copy of the structure
}

int main() {
    struct Student winner;

    winner = getTopStudentDetails();

    printf("\n--- Main function received this winner's details ---\n");
    printf("Top Student Name: %s", winner.name);
    printf("Roll No: %d\n", winner.roll_no);
    printf("Marks: %.2f\n", winner.marks);

    return 0;
}
