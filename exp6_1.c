#include <stdio.h>

void sumOfElements(int array[], int n);
void reverseArray(int array[], int n);
void findMinMax(int array[], int n);
void rotateArray(int array[], int n, int steps);

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }

    int choice;
    do 
    {
        printf("\nMenu:\n");
        printf("1. Find the sum of elements\n");
        printf("2. Reverse the array\n");
        printf("3. Find the maximum and minimum elements\n");
        printf("4. Rotate the array to the right\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                sumOfElements(array, n);
                break;
            case 2:
                reverseArray(array, n);
                break;
            case 3:
                findMinMax(array, n);
                break;
            case 4:
                int steps;
                printf("Enter the number of steps to rotate: ");
                scanf("%d", &steps);
                rotateArray(array, n, steps);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void sumOfElements(int array[], int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    printf("Sum of elements: %d\n", sum);
}

void reverseArray(int array[], int n) 
{
    int temp;
    for (int i = 0; i < n / 2; i++) 
    {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
    printf("Array reversed successfully.\n");
}

void findMinMax(int array[], int n) 
{
    int min = array[0];
    int max = array[0];
    for (int i = 1; i < n; i++) 
    {
        if (array[i] < min) 
        {
            min = array[i];
        }
        if (array[i] > max) 
        {
            max = array[i];
        }
    }
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
}

void rotateArray(int array[], int n, int steps) 
{
    int temp;
    for (int i = 0; i < steps; i++) 
    {
        temp = array[n - 1];
        for (int j = n - 1; j > 0; j--) 
        {
            array[j] = array[j - 1];
        }
        array[0] = temp;
    }
    printf("Array rotated successfully.\n");
}
