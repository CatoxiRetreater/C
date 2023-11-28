#include <stdio.h>
#define MAX_STUDENTS 10

struct Student 
{
    char name[50];
    int sapId;
    int rollNumber;
    char address[100];
};

struct College
{
    char name[50];
    float areaInacres;
    struct Student students[MAX_STUDENTS];
};

void inputStudent(struct Student *student) 
{
    printf("Enter name of student: ");
    scanf("%s", student->name);

    printf("Enter SAP ID of student: ");
    scanf("%d", &(student->sapId));

    printf("Enter Roll number of student: ");
    scanf("%d", &(student->rollNumber));

    printf("Enter address of student: ");
    scanf(" %[^\n]", student->address);
}

void inputCollege(struct College *college, int numStudents) 
{
    printf("Enter name of college: ");
    scanf("%s", college->name);

    printf("Enter area of college in acres: ");
    scanf("%f", &(college->areaInacres));

    printf("\n");
    printf("Enter details for students:\n");

    for (int i = 0; i < numStudents; i++) 
    {
        printf("\n");
        printf("Enter details for student %d:\n", i + 1);
        inputStudent(&(college->students[i]));
    }
}

void displayStudent(struct Student student) 
{
    printf("\n");
    printf("Name of the student is %s\n", student.name);
    printf("SAP ID of the student is %d\n", student.sapId);
    printf("Roll No. of the student is %d\n", student.rollNumber);
    printf("Address of the student is %s\n", student.address);
}

void displayCollege(struct College college, int numStudents) 
{
    printf("\n");
    printf("College Information:\n");
    printf("Name of the college is %s\n", college.name);
    printf("Area of the college is %.2f acres\n", college.areaInacres);

    printf("\n");
    printf("Student Information:\n");

    for (int i = 0; i < numStudents; i++) 
    {
        printf("\n");
        printf("Details for student %d:\n", i + 1);
        displayStudent(college.students[i]);
    }
}

int main() 
{
    struct College college;
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    if (numStudents > MAX_STUDENTS) 
    {
        printf("Maximum number of students exceeded. Please try again.\n");
        return 1;
    }

    inputCollege(&college, numStudents);
    displayCollege(college, numStudents);

    return 0;
}