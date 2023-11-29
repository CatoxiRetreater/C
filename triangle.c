#include<stdio.h>
int x, y, z;

int main()
{
    printf("Enter sides of triangle: ");
    scanf("%f%f%f", &x, &y, &z);

    if(x==y&&y==z&&z==x)
    {
        printf("It's an equilateral triangle");
    }
    else if(x==y&&y!=z&&z!=x)
        if(x!=y&&y==z&&z!=x)
            if(x!=y&&y!=z&&z==x)
             {
                 printf("It's a isosceles triangle");
             }
    else{
        printf("It's a scalene triangle ");
    }
}