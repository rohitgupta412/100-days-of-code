#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_number;
    float marks;
};

void write_records(const char* filename);
void read_records(const char* filename);

int main() {
    const char* filename = "students.txt";

    write_records(filename);
    read_records(filename);

    return 0;
}

void write_records(const char* filename) {
    FILE *file_ptr;
    struct Student s;
    int n, i;

    file_ptr = fopen(filename, "w");
    if (file_ptr == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Roll Number: ");
        scanf("%d", &s.roll_number);
        printf("Marks: ");
        scanf("%f", &s.marks);

        // Write formatted data to the file
        fprintf(file_ptr, "%s %d %.2f\n", s.name, s.roll_number, s.marks);
    }

    fclose(file_ptr);
    printf("\nStudent records successfully written to %s.\n", filename);
}

void read_records(const char* filename) {
    FILE *file_ptr;
    struct Student s;

    file_ptr = fopen(filename, "r");
    if (file_ptr == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }

    printf("\n--- Reading Student Records ---\n");
    printf("Name\tRoll No\tMarks\n");

    // Read data back using fscanf until EOF
    while (fscanf(file_ptr, "%s %d %f", s.name, &s.roll_number, &s.marks) == 3) {
        printf("%s\t%d\t%.2f\n", s.name, s.roll_number, s.marks);
    }

    fclose(file_ptr);
}
