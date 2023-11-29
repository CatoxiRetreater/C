#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50
#define MAX_REGISTRATION_LENGTH 100
#define MAX_DOB_LENGTH 100

struct Student 
{
    char name[MAX_NAME_LENGTH];
    int sapId;
    int rollNumber;
    char registration[MAX_REGISTRATION_LENGTH];
    char dateOfBirth[MAX_DOB_LENGTH];
};

void inputStudent(struct Student *student) 
{
    printf("Enter name of student: ");
    fgets(student->name, MAX_NAME_LENGTH, stdin);

    printf("Enter SAP ID of student: ");
    scanf("%d", &(student->sapId));

    printf("Enter Roll number of student: ");
    scanf("%d", &(student->rollNumber));

    printf("Enter registration date of student: ");
    scanf(" %[^\n]s", student->registration);

    printf("Enter DOB of student: ");
    scanf(" %[^\n]s", student->dateOfBirth);
}

void displayStudent(struct Student student) 
{
    printf("\n");
    printf("Name of the student is %s\n", student.name);
    printf("SAP ID of the student is %d\n", student.sapId);
    printf("Roll No. of the student is %d\n", student.rollNumber);
    printf("Date of registration of the student is %s\n", student.registration);
    printf("Date of birth of the student is %s\n", student.dateOfBirth);
}

int main() 
{
    struct Student students[MAX_STUDENTS];
    int numStudents;

    printf("Enter the number of students (up to %d): ", MAX_STUDENTS);
    scanf("%d", &numStudents);

    if (numStudents<=0 || numStudents>MAX_STUDENTS) 
    {
        printf("Invalid number of students. Please enter a number between 1 and %d.\n", MAX_STUDENTS);
        return 1;
    }

    while (getchar()!='\n');

    for (int i=0; i<numStudents; i++) 
    {
        printf("\n");
        printf("Enter details for student %d:\n", i+1);
        inputStudent(&students[i]);
    }

    printf("\n");
    printf("Student Information:\n");

    for (int i=0; i<numStudents; i++) 
    {
        printf("\n");
        printf("Details for student %d:\n", i+1);
        displayStudent(students[i]);
    }

    return 0;
}
