#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() 
{
    float a, b, result;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Select operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1:
            result = add(a, b);
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = subtract(a, b);
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = multiply(a, b);
            printf("Result: %.2f\n", result);
            break;
        case 4:
            result = divide(a, b);
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

float add(float a, float b) 
{
    return a + b;
}

float subtract(float a, float b) 
{
    return a - b;
}

float multiply(float a, float b) 
{
    return a * b;
}

float divide(float a, float b) 
{
    return a / b;
}
