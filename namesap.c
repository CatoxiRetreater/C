#include <stdio.h>

struct Student 
{
    char name[50];
    int sapId;
    int rollNumber;
    char address[100];
};

int main() 
{
    struct Student student1;

    printf("Enter name of student: ");
    scanf("%s", student1.name);

    printf("Enter SAP ID of student: ");
    scanf("%d", &student1.sapId);

    printf("Enter Roll number of student: ");
    scanf("%d", &student1.rollNumber);

    printf("Enter address of student: ");
    scanf(" %[^\n]", student1.address);

    printf("\n");
    printf("\n");
    printf("Name of the student is %s\n", student1.name);
    printf("SAP ID of the student is %d\n", student1.sapId);
    printf("Roll No. of the student is %d\n", student1.rollNumber);
    printf("Address of the student is %s\n", student1.address);

    return 0;
}
