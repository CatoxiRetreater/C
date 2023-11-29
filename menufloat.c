#include <stdio.h>

int add() 
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    return a + b;
}

void sub(int a, int b) 
{
    printf("Subtraction: %d\n", a - b);
}

void mul(int* a, int* b) 
{
    printf("Multiplication: %d\n", (*a) * (*b));
}

float div(int a, int b) 
{
    if (b == 0) 
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return (float)a / b;
}

int main() 
{
    int choice;
    int result;
    int a, b;

    do 
    {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                result = add();
                printf("Addition: %d\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                sub(a, b);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                mul(&a, &b);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Division: %.2f\n", div(a, b));
                break;
            case 5:
                printf("Exit\n");
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (choice != 5);
    
    return 0;
}
    


