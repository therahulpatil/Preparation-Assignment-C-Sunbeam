#include <stdio.h>

struct emp {
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

void emp_init(struct emp* e) {
    printf("Enter First Name: ");
    scanf("%s", e->firstName);

    printf("Enter Last Name: ");
    scanf("%s", e->lastName);

    printf("Enter Monthly Salary: ");
    scanf("%lf", &e->monthlySalary);

    
}

void set_salary(struct emp *e, double sal) {
    if (sal >= 0) {
        e->monthlySalary = sal;
    }
}

void emp_display(struct emp *e) {
    printf("\nEmployee Details:\n");
    printf("Name   : %s %s\n", e->firstName, e->lastName);
    printf("Salary : %.2lf (Monthly)\n", e->monthlySalary);
    printf("Salary : %.2lf(Yearly)\n", e->monthlySalary * 12);
}

int main() {
    struct emp e1, e2;

    printf("Enter details for Employee 1:\n");
    emp_init(&e1);

    printf("\nEnter details for Employee 2:\n");
    emp_init(&e2);

    
    printf("\nBefore Raise\n");
    emp_display(&e1);
    emp_display(&e2);

    set_salary(&e1, e1.monthlySalary * 1.10);
    set_salary(&e2, e2.monthlySalary * 1.10);

    printf("\n After 10%% Raise \n");
    emp_display(&e1);
    emp_display(&e2);

    return 0;
}