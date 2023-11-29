#include <stdio.h>

int main() 
{
    int n;
    double sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input. 'n' must be a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) 
    {
        sum += 1.0 / i;
    }

    printf("Sum of the series 1 + 1/2 + 1/3 + ... + 1/%d = %f\n", n, sum);

    return 0;
}
