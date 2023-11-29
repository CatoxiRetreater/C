//pointer to function

#include<stdio.h>
void display(int);
void greet(int);
int main()
{
	void (*ptr)(int);		//defining function pointer
	ptr = &display;			//assigning a fn. which needs to be referenced using ptr
	display(10);		    //normal call by value
    (*ptr)(10);             //invoking a function  using function pointer
    ptr = &greet;   
    (*ptr)(5);
    return 0;
}
void display(int a)
{
    printf("Given number: %d\n", a);
}
void greet(int a)
{
    printf("Hi%d\n", a)
}