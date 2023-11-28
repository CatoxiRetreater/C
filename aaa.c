//STATIC

//gets is depricated(old it was their in the library and its recommended to not to use it)

/*#include<stdio.h>
{
    char a[15];
    gets(a);
    puts(a);
    
    return 0;
}*/

/*#include<stdio.h>

int main()
{
    int a[3];   //12B, [0] to [2]
    a[3] = 20;
    printf("%d", a[3]);

    return 0;

}*/

/*#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    a=10;
    printf("Enter input: %d\n", a);

    int *a1 = (int*)malloc(sizeof(int));
    *a1 = 20;
    printf("Enter input: %d\n", *a1);

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Entered input: %d\n", a);

    printf("Enter the value of a1: ");
    scanf("%d", &a1);
    printf("Entered input: %d\n", a1);     //whenever there is a segmentation error so the memory is not handled properly
    free(a1);
}*/

//----------------------dynamic allocation-----------------------------
#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of dynamic array: ");
    scanf("%d", &size);
    int *a1 = (int*)malloc(size*sizeof(int));

    printf("Enter the elements: ");
    for(int i=0; i<size; i++)
            scanf("%d", a1[i]);

    printf("The dynamic array has: ");
    for(int i=0; i<size; i++)
            printf("%d", a1[i]);

    return 0;
}

//Homework - Dynamic allocation for 2D arrays