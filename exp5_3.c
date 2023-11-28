#include<stdio.h>
#include"arithmetic.h"
#include"logical.h"
#include"bitwise.h"

int main()
{
    int a, b, choice;
    printf("Select a choice:\n");
    printf("1. Arithmetic\n");
    printf("2. Logical\n");
    printf("3. Bitwise\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            int sum = add(a, b);
            int difference = subtract(a, b);
            int product = multiply(a, b);
            int quotient = divide(a, b);
    
            printf("Sum: %d\n", sum);
            printf("Difference: %d\n", difference);
            printf("Product: %d\n", product);
            printf("Quotient: %d\n", quotient);

            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            int result1 = and(a, b);
            int result2 = or(a, b);
            int result3 = not(a);
    
            printf("AND: %d\n", result1);
            printf("OR: %d\n", result2);
            printf("NOT: %d\n", result3);

            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            int result4 = bitwiseAnd(a, b);
            int result5 = bitwiseOr(a, b);
            int result6 = bitwiseXor(a, b);
    
            printf("Bitwise AND: %d\n", result4);
            printf("Bitwise OR: %d\n", result5);
            printf("Bitwise XOR: %d\n", result6);

            break;
    }
    return 0;
}