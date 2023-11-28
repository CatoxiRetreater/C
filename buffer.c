#include<stdio.h>
int main()
{
    char c1, c2;
    printf("Enter character-1: ");
    scanf("%c", &c1);

    while((getchar())!='\n');       //used to clear the buffer inputs

    printf("Enter character-2: ");
    c2=getchar();

    printf("character-1=%c, ASCII code=%d\n",c1,c2);
    printf("character-2=%c, ASCII code=%d\n",c1,c2);

    return 0;
}