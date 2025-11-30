#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    
    struct Student *s_ptr;

    s_ptr = (struct Student *)malloc(sizeof(struct Student));

    if (s_ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Memory allocated dynamically for one student.\n");

    printf("Enter student name: ");

    while (getchar() != '\n'); 
    fgets(s_ptr->name, 50, stdin); 

    printf("Enter roll number: ");
    scanf("%d", &s_ptr->roll_no);
    
    printf("Enter marks: ");
    scanf("%f", &s_ptr->marks);

    printf("\n--- Dynamically allocated student details ---\n");
    printf("Name: %s", s_ptr->name);
    printf("Roll No: %d\n", s_ptr->roll_no);
    printf("Marks: %.2f\n", s_ptr->marks);

   
    free(s_ptr);
    s_ptr = NULL; 
    printf("\nMemory freed.\n");

    return 0;
}
