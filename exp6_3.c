#include <stdio.h>

void transpose(int matrix[][100], int rows, int columns) 
{
    int transposed[columns][rows];
    
    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<columns; j++) 
        {
            transposed[j][i] = matrix[i][j];
        }
    }
    
    printf("Transpose of the matrix:\n");
    for (int i=0; i<columns; i++) 
    {
        for (int j=0; j<rows; j++) 
        {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
}

void inverse(int matrix[][100], int n) 
{
    int determinant= 0;
    int cofactor[n][n];
    int inverse[n][n];
    
    printf("Inverse of the matrix:\n");
    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<n; j++) 
        {
            printf("%d ", inverse[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int matrix[100][100];
    int rows, columns;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    
    printf("Enter the elements of the matrix:\n");
    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<columns; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int choice;
    printf("Menu:\n");
    printf("1. Find the Transpose\n");
    printf("2. Find the Inverse\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice) 
    {
        case 1:
            transpose(matrix, rows, columns);
            break;
        case 2:
            inverse(matrix, rows);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    return 0;
}
