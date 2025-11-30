#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joiningDate; 
};

int main() {
    struct Employee emp1;

    printf("Enter employee name: ");
    fgets(emp1.name, 50, stdin);

    printf("Enter employee ID: ");
    scanf("%d", &emp1.id);

    printf("Enter employee salary: ");
    scanf("%f", &emp1.salary);

    printf("Enter joining date (DD MM YYYY): ");
    scanf("%d %d %d", &emp1.joiningDate.day, 
                       &emp1.joiningDate.month, 
                       &emp1.joiningDate.year);

    printf("\n--- Employee Details ---\n");
    printf("Name: %s", emp1.name);
    printf("ID: %d\n", emp1.id);
    printf("Salary: %.2f\n", emp1.salary);
    printf("Joining Date: %02d/%02d/%04d\n", emp1.joiningDate.day, 
                                            emp1.joiningDate.month, 
                                            emp1.joiningDate.year);

    return 0;
}
