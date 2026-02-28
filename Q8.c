#include<stdio.h>
struct Student{
    char rollNo[10];
    char studentName[10];
    float totalMarks;
};

void readStudent(struct Student *s1)
{
    printf("Enter Student Name: ");
    fgets(s1->studentName, sizeof(s1->studentName), stdin);

    printf("Enter Roll Number: ");
    fgets(s1->rollNo, sizeof(s1->rollNo), stdin);

    printf("Enter Total Marks: ");
    scanf("%f", &s1->totalMarks);
}

void viewStudent(struct Student s1)
{
    printf("\nStudent Details\n");
    printf("Name: %s\n", s1.studentName);
    printf("Roll No: %s\n", s1.rollNo);
    printf("Total Marks: %.2f\n", s1.totalMarks);
}

int main()
{
    struct Student s1;
    readStudent(&s1);
    viewStudent(s1);
    return 0;
}