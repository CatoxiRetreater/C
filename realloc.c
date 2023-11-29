#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a, m, n, i;
	printf("Enter size of array: ");
	scanf("%d", &n);
	a = calloc(n, sizeof(int));

	if(a!=NULL)
	{
		printf("Base address of array: %p\n", a);
		
		printf("Enter %d elements of array: ", n);
		for(i=0; i<n; i++)
				scanf("%d", &a[i]);

		printf("Elements of array: ");
		for(i=0; i<n; i++)
				printf("%d", a[i]);
		printf("\n");

        //Reallocation of Dynamic Memory:

		printf("Enter size of new array: ");
		scanf("%d", &m);
		a = realloc(a, m*sizeof(int));
		if(a!=NULL)
		{
			printf("New base address of array: %p\n", a);

			printf("Elements of old array: ");
			for(i=0; i<n; i++)
				printf("%d", a[i]);
			printf("\n");

			printf("Enter %d elements of new array: ", m-n);
			for(i=n; i<m; i++)
				scanf("%d", &a[i]);

			printf("Elements of new array: ");
			for(i=0; i<m; i++)
				printf("%d", a[i]);
			printf("\n");

			free(a);

		}
    }
}

//Homework: Compare malloc, calloc and realloc
//What are 2D Dynamic arrays?