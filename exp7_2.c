#include <stdio.h>

int addOne(int a) 
{
    return a+1;
}

int multiplyByTwo(int a) 
{
    return a*2;
}

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i=0; i<n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int choice;
    printf("Select a transformation function:\n");
    printf("1. Add One\n");
    printf("2. Multiply by Two\n");
    scanf("%d", &choice);

    int (*transformationFunction)(int);
    if (choice == 1) 
    {
        transformationFunction = addOne;
    } else if (choice == 2) 
    {
        transformationFunction = multiplyByTwo;
    } else 
    {
        printf("Invalid choice. Exiting...\n");
        return 0;
    }

    printf("Transformed array:\n");
    for (int i=0; i<n; i++) 
    {
        printf("%d", transformationFunction(arr[i]));
    }
    printf("\n");

    return 0;
}
