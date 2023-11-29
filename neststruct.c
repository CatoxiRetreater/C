#include<stdio.h>
struct date
{
    int d, m, yr;
};
struct student
{
    int sap;
    int subs;
    struct date dob;        //nested structures
};

int main()
{
    struct student stud1;
    printf("Enter the SAP, Subjects & DOB: ");
    scanf("%d%d%d%d%d", &stud1.sap, &stud1.subs, &stud1.dob.d, &stud1.dob.m, &stud1.dob.yr);
    printf("Enter student details: ");
    scanf("%d, %d, %d-%d-%d", stud1.sap, stud1.subs, stud1.dob.d, stud1.dob.m, stud1.dob.yr);
    return 0;
}

//How to create dynamic structures?
//Consider n as the number of students. Allocate dynamic memory for n students to create a student database and printing it
