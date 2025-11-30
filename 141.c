#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1;

    printf("Enter student name: ");
    // Clear the input buffer before reading a new string if previous input ended with scanf
    // while (getchar() != '\n'); 
    fgets(s1.name, 50, stdin); 
    
    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);
    
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s", s1.name);
    printf("Roll No: %d\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
