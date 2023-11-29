#include<stdio.h>

int main(){
    int a, i;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a<0)
        printf("Error! Factorial of negative number does not exist.");
    else{
        for(i = 1; i<=a; ++i){
            fact = fact*i;
            }   
        printf("The factorial of %d = %d\n", a, fact);
        }
}
