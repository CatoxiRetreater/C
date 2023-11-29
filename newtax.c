#include<stdio.h>

int main()
{
    int ai,ded,Ti,age,choice;
    float Tax_Slab,Tax,Surcharge,Updated_Tax,HE_Cess,Final_Tax;
    printf("enter you annual income:- ");
    scanf("%d", &ai);
    printf("enter the deductions:- ");
    scanf("%d", &ded);
    Ti = ai - ded;
    printf("Your taxable in income is %d\n",Ti);
    printf("Enter the age:- ");
    scanf("%d",&age);
    printf("Old Regime = 1 and New Regime = 2\n");
    printf("Enter the regime you want to choose:- ");
    scanf("%d",&choice);
    if(age<60){
        if(choice == 1){
            if(Ti <= 250000){
                Tax = 0;
                printf("Tax = %f\n",Tax);
            }
            else if(Ti > 250000 && Ti <= 500000){
               Tax_Slab = Ti - 250000;
               Tax = 0.05*Tax_Slab;
               printf("Tax = %f\n",Tax);
            }
            else if(Ti > 500000 && Ti <= 1000000){
                Tax_Slab = Ti - 500000;
                Tax = 12500 + (0.2 * Tax_Slab);
                printf("Tax = %f\n",Tax);
            }
            else{
                Tax_Slab = Ti - 1000000;
                Tax = 112500 + (0.3* Tax_Slab);
                printf("Tax = %f\n",Tax);
            }
        }
        else if(choice == 2){
            if(Ti <= 250000){
                Tax = 0;
                printf("Tax = %f\n",Tax);
            }
            else if(Ti > 250000 && Ti <= 500000){
               Tax_Slab = Ti - 250000;
               Tax = 0.05*Tax_Slab;
               printf("Tax = %f\n",Tax);
            }
            else if(Ti > 500000 && Ti <= 750000){
               Tax_Slab = Ti - 500000;
               Tax = 12500 + (0.1*Tax_Slab);
               printf("Tax = %f\n",Tax);
            }
            else if(Ti > 750000 && Ti <= 1000000){
               Tax_Slab = Ti - 750000;
               Tax = 37500 + (0.15*Tax_Slab);
               printf("Tax = %f\n",Tax);
            }
            else if(Ti > 1000000 && Ti <= 1250000){
               Tax_Slab = Ti - 1000000;
               Tax = 75000 + (0.2*Tax_Slab);
               printf("Tax = %f\n",Tax);
            }
            else if(Ti > 1250000 && Ti <= 1500000){
               Tax_Slab = Ti - 12500000;
               Tax = 125000 + (0.25*Tax_Slab);
               printf("Tax = %f\n",Tax);
            }
            else{
                Tax_Slab = Ti - 1500000;
                Tax = 187500 + (0.3* Tax_Slab);
                printf("Tax = %f\n",Tax);
            }
        }
    }
    else if(age >= 60 && age < 80){
        if(choice == 1){
            if(Ti <= 300000){
                Tax = 0;
                printf("Tax = %f\n",Tax);
            }
            else if(Ti > 300000 && Ti <= 500000){
               Tax_Slab = Ti - 300000;
               Tax = 0.05*Tax_Slab;
               printf("Tax = %f\n",Tax);
            }
            else if(Ti > 500000 && Ti <= 1000000){
                Tax_Slab = Ti - 500000;
                Tax = 10000 + (0.2 * Tax_Slab);
                printf("Tax = %f\n",Tax);
            }
            else{
                Tax_Slab = Ti - 1000000;
                Tax = 110000 + (0.3* Tax_Slab);
                printf("Tax = %f\n",Tax);
            }
        }
        else if(choice == 2){
            if(Ti <= 250000){
                Tax = 0;
                printf("Tax = %f\n",Tax);
            }
            else if(Ti > 250000 && Ti <= 500000){
               Tax_Slab = Ti - 250000;
               Tax = 0.05*Tax_Slab;
               printf("Tax = %f\n",Tax);
            }
            else if(Ti > 500000 && Ti <= 750000){
               Tax_Slab = Ti - 500000;
               Tax = 12500 + (0.1*Tax_Slab);
               printf("Tax = %f\n",Tax);
            }
            else if(Ti > 750000 && Ti <= 1000000){
               Tax_Slab = Ti - 750000;
               Tax = 37500 + (0.15*Tax_Slab);
               printf("Tax = %f\n",Tax);
            }
            else if(Ti > 1000000 && Ti <= 1250000){
               Tax_Slab = Ti - 1000000;
               Tax = 75000 + (0.2*Tax_Slab);
               printf("Tax = %f\n",Tax);
            }
            else if(Ti > 1250000 && Ti <= 1500000){
               Tax_Slab = Ti - 12500000;
               Tax = 125000 + (0.25*Tax_Slab);
               printf("Tax = %f\n",Tax);
            }
            else{
                Tax_Slab = Ti - 1500000;
                Tax = 187500 + (0.3* Tax_Slab);
                printf("Tax = %f\n",Tax);
            }
        }
    }
    else{
        if(choice == 1){
            if(Ti <= 500000){
                Tax = 0;
                printf("Tax = %f\n",Tax);
            }
            else if(Ti > 500000 && Ti <= 1000000){
                Tax_Slab = Ti - 500000;
                Tax = 0.2 * Tax_Slab;
                printf("Tax = %f\n",Tax);
            }
            else{
                Tax_Slab = Ti - 1000000;
                Tax = 1000000 + (0.3* Tax_Slab);
                printf("Tax = %f\n",Tax);
            }
        }
        else if(choice == 2){
            if(Ti <= 250000){
                Tax = 0;
                printf("Tax = %f\n",Tax);
            }
            else if(Ti > 250000 && Ti <= 500000){
               Tax_Slab = Ti - 250000;
               Tax = 0.05*Tax_Slab;
               printf("Tax = %f\n",Tax);
            }
            else if(Ti > 500000 && Ti <= 750000){
               Tax_Slab = Ti - 500000;
               Tax = 12500 + (0.1*Tax_Slab);
               printf("Tax = %f\n",Tax);
            }
            else if(Ti > 750000 && Ti <= 1000000){
               Tax_Slab = Ti - 750000;
               Tax = 37500 + (0.15*Tax_Slab);
               printf("Tax = %f\n",Tax);
            }
            else if(Ti > 1000000 && Ti <= 1250000){
               Tax_Slab = Ti - 1000000;
               Tax = 75000 + (0.2*Tax_Slab);
               printf("Tax = %f\n",Tax);
            }
            else if(Ti > 1250000 && Ti <= 1500000){
               Tax_Slab = Ti - 12500000;
               Tax = 125000 + (0.25*Tax_Slab);
               printf("Tax = %f\n",Tax);
            }
            else{
                Tax_Slab = Ti - 1500000;
                Tax = 187500 + (0.3* Tax_Slab);
                printf("Tax = %f\n",Tax);
            }
        }
    }
    if(Tax >= 1000000){
        Surcharge = 0.01 * Tax;
        printf("Surcharge = %f\n",Surcharge);
    }
    else if(Tax > 1000000 && Tax <= 5000000){
        Surcharge = 0.05 * Tax;
        printf("Surcharge = %f\n",Surcharge);
    }
    else if(Tax > 5000000 && Tax <= 10000000){
        Surcharge = 0.1 * Tax;
        printf("Surcharge = %f\n",Surcharge);
    }
    else if(Tax > 10000000 && Tax <= 20000000){
        Surcharge = 0.15 * Tax;
        printf("Surcharge = %f\n",Surcharge);
    }
    else if(Tax > 20000000 && Tax <= 50000000){
        Surcharge = 0.25 * Tax;
        printf("Surcharge = %f\n",Surcharge);
    }
    else{
        Surcharge = 0.37 * Tax;
        printf("Surcharge = %f\n",Surcharge);
    }
    Updated_Tax = Tax + Surcharge;
    printf("Updated Tax = %f\n",Updated_Tax);
    HE_Cess = 0.04 * Updated_Tax;
    Final_Tax = Updated_Tax + HE_Cess;
    printf("Final_Tax = %f",Final_Tax);
    return 0;
}