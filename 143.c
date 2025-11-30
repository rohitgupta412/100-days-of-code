#include <stdio.h>
#include <string.h> 

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i, highest_index = 0;

    
    students[0] = (struct Student){"Alice", 1, 95.5};
    students[1] = (struct Student){"Bob", 2, 88.0};
    students[2] = (struct Student){"Charlie", 3, 99.9};
    students[3] = (struct Student){"David", 4, 76.2};
    students[4] = (struct Student){"Eve", 5, 99.8};

    // Find the highest marks
    for (i = 1; i < 5; i++) {
        if (students[i].marks > students[highest_index].marks) {
            highest_index = i;
        }
    }

    printf("\n--- Student with Highest Marks ---\n");
    printf("Name: %s", students[highest_index].name); 
   
    printf("Roll No: %d\n", students[highest_index].roll_no);
    printf("Marks: %.2f\n", students[highest_index].marks);

    return 0;
}
