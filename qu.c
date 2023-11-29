#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;

int main() 
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    Student* database = (Student*)malloc(n * sizeof(Student));

    for (int i = 0; i < n; i++) 
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", database[i].name);
        printf("Age: ");
        scanf("%d", &database[i].age);
        printf("GPA: ");
        scanf("%f", &database[i].gpa);
    }

    printf("\nStudent Database:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", database[i].name);
        printf("Age: %d\n", database[i].age);
        printf("GPA: %.2f\n", database[i].gpa);
        printf("\n");
    }

    free(database);

    return 0;
}
