#include<stdio.h>
#include<math.h>

int main()
{
    int ai;
    printf("Enter your Annual Income: ");
    scanf("%d", &ai);

    int ded;
    printf("Enter your deduction: ");
    scanf("%d", &ded);

    int taxi;
    taxi = ai-ded;
    printf("Your taxable income is: ", taxi);
}