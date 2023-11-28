#include <stdio.h>

void findIntersection(int array1[], int array2[], int size1, int size2);
void mergeArrays(int array1[], int array2[], int size1, int size2, int mergedArray[]);

int main() 
{
    int size1, size2;
    
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    
    int array1[size1];
    
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < size1; i++) 
    {
        scanf("%d", &array1[i]);
    }
    
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    
    int array2[size2];
    
    printf("Enter the elements of the second array: ");
    for (int i=0; i<size2; i++) 
    {
        scanf("%d", &array2[i]);
    }
    
    int mergedArray[size1+size2];
    
    int choice;
    
    printf("Menu:\n");
    printf("1. Find the intersection of two arrays\n");
    printf("2. Merge the contents into another array\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice) 
    {
        case 1:
            findIntersection(array1, array2, size1, size2);
            break;
        case 2:
            mergeArrays(array1, array2, size1, size2, mergedArray);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    return 0;
}

void findIntersection(int array1[], int array2[], int size1, int size2) 
{
    printf("Intersection of the two arrays: ");
    
    for (int i=0; i<size1; i++) 
    {
        for (int j=0; j<size2; j++) 
        {
            if (array1[i] == array2[j]) 
            {
                printf("%d ", array1[i]);
                break;
            }
        }
    }
    printf("\n");
}

void mergeArrays(int array1[], int array2[], int size1, int size2, int mergedArray[]) 
{
    int i, j, k;
    
    i=j=k=0;
    
    while (i<size1&& j<size2) 
    {
        if (array1[i]<array2[j]) 
        {
            mergedArray[k++]=array1[i++];
        } else 
        {
            mergedArray[k++]=array2[j++];
        }
    }
    
    while (i<size1) 
    {
        mergedArray[k++]= array1[i++];
    }
    
    while (j < size2) 
    {
        mergedArray[k++]=array2[j++];
    }
    
    printf("Merged array: ");
    
    for (int i=0; i<k; i++) 
    {
        printf("%d ", mergedArray[i]);
    }
    
    printf("\n");
}
