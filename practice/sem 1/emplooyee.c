//9.Write a C Program to input gender and salary of an employee and check whether salary of an employee is taxable or not.

#include <stdio.h>
int main()
{
    char g;
    float s;
    printf("\n\t\t ENTER THE GENDER (M/F)\n");
    scanf("%c" ,&g);
    printf("\n ENTER THE SALARY : ");
    scanf("%f", &s);
    if( g=='m' )
    {
        if (s>15000)
        { 
            printf("\nSALARY IS TAXABLE");
        }
        else
        {
            printf("\nSALARY IS NOT TAXABLE"); 
        }
    }
    else if ( g=='f' )
    {
        if (s>18000)
        { 
            printf("\nSALARY IS NOT TAXABLE"); 
        }
    }
    return 0;
}

        