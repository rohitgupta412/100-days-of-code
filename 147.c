#include <stdio.h>
#include <stdlib.h> 

struct Employee {
    int id;
    char name[48]; 
    float salary;
};

int main() {
    struct Employee emp_out = {101, "John Doe", 50000.00};
    struct Employee emp_in;
    FILE *fp;
    char filename[] = "employee.bin";

   
    fp = fopen(filename, "wb"); 
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    printf("Writing employee data to %s...\n", filename);
    fwrite(&emp_out, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("Data written successfully.\n");

    fp = fopen(filename, "rb"); 
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("Reading employee data from %s...\n", filename);
    fread(&emp_in, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\n--- Data read from file ---\n");
    printf("ID: %d\n", emp_in.id);
    printf("Name: %s\n", emp_in.name);
    printf("Salary: %.2f\n", emp_in.salary);

    return 0;
}
