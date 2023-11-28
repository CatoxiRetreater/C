#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 12

struct student_record 
{
    char name[MAX_NAME_LENGTH];
    int sapid;
    int enrollment_no;
    union 
    {
        char mobile_no[MAX_PHONE_LENGTH];
        char landline_no[MAX_PHONE_LENGTH];
    } phone;
};

void clearBuffer() 
{
    int c;
    while ((c=getchar())!='\n' && c!=EOF);
}

int main() 
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    clearBuffer();

    struct student_record students[MAX_STUDENTS];

    for (int i=0; i<n; i++) 
    {
        printf("\nStudent %d\n", i+1);
        printf("Enter name: ");
        fgets(students[i].name, MAX_NAME_LENGTH, stdin);
        students[i].name[strcspn(students[i].name, "\n")]='\0';

        printf("Enter SAP ID: ");
        scanf("%d", &students[i].sapid);
        clearBuffer();

        printf("Enter enrollment number: ");
        scanf("%d", &students[i].enrollment_no);
        clearBuffer();

        printf("Enter mobile number: ");
        fgets(students[i].phone.mobile_no, MAX_PHONE_LENGTH, stdin);
        students[i].phone.mobile_no[strcspn(students[i].phone.mobile_no, "\n")]='\0';
    }
      
    printf("\nEntered values:\n");
    for (int i=0; i<n; i++) 
    {
        printf("\nStudent %d\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("SAP ID: %d\n", students[i].sapid);
        printf("Enrollment Number: %d\n", students[i].enrollment_no);
        printf("Phone Number: %s\n", students[i].phone.mobile_no);
    }

    return 0;
}
