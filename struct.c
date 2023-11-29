#include<stdio.h>
struct student
{
    int sap;                 //you cannot initialise here or use any function here
    int subs;

}var1, var2;               //real-time variables can be assigned as var1.sap=500123465; var2.sap=500118569

int main()
{
    struct student var1[10], *ptr[10];
    var1.sap = 4000;        //dot operator for member access

    /*ptr = &var1;
    ptr->sap = 5000;        //arrow operator for memver access but will use for loop
    */
    int i;
    for(i=0; i<10; i++)
        ptr[i] = &var1[i];


















    /*Array of Structures
    int size, i;
    printf("Enter the size: ");
    scanf("%d", &size);

    struct student array[size];     //array of structures, size
    for(i=0; i<size; i++);
    {
        printf("Enter the details of student-%d: ", i+1);
        scanf("%d%d", &array[i].sap, &array[i].subs);
    }

    for(i=0; i<size; i++);
    {
        printf("Enter the details of student: %d", i+1);
        printf("%ls, %ls\n", &array[i].sap, &array[i].subs);
    }*/


    /*var1.sap=500123465; var2.sap=500118569;
    var1.subs=5; var2.subs=5;
    printf("Student 1: \n");
    printf("SAP: %d, Subjects: %d\n", var1.sap, var1.subs);
    printf("Student 2: \n");
    printf("SAP: %d, Subjects: %d\n", var2.sap, var2.subs);
    return 0;*/
}