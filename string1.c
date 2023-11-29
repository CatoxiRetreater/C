#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str1[4]={'D','O','G','S'};
    printf("Individual characters: ");
    for(int i=0; i<4; i++)
        printf("%c", str1[i]);
    printf("\nString-1:%s\n", str1);

    //The last character in a string is taken as a null character which is automatically added by the system\

    char str2[10]="Hello HRU";
    printf("String-2:%s\n", str2);

    char str3[]="What is your name?";
    //Null character
    printf("String-3:%s is of size %ld and length %ld\n",str3,sizeof(str3), strlen(str3));

    //Modification of individual character is possible(auto variable stored in a stack segment)
    printf("First character of string-3:%c\n",str3[0]);
    str3[0]='Y';
    printf("String-3:%s\n",str3);   //Modified string "Yello...."
    *(str3+1)='a';
    printf("String-3:%s\n",str3);

}