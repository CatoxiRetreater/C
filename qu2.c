#include<stdio.h>
#include<stdlib.h>
 struct student
 {
    int sap;
    int subs;
 }*new;
 
 void dma();            //To perform DMA

 int main()
 {
    int choice;
    printf("1: DMA, 2: Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    while(1)
    {
        switch(choice)
        {
            case 1:
                dma();
                break;
            case 2:
                printf("Application Terminated!\n");
                exit(0);
                break;
            default:
                printf("Invalid Input\n");
        }
    }
 }

 void dma()
 {
    new = (struct student *)malloc(sizeof(struct student));     //Perform DMA
    if(new==NULL)
        printf("DMA Unsuccessful\n");
    else   
        printf("DMA Successful: %p\n", new);
        printf("Enter Data: ");
        scanf("%d%d", &new->sap, &new->subs);
 }