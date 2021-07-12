//  6.Write a program to enter a numeric value with in the range from 1 to 12 and give its corresponding month name.
#include <stdio.h>
int main()
{
    int num;

    printf("Enter a no. between 1-12 !");
    scanf("%d",&num);

    if(num == 1)
    {
        printf("January");
    }
    
    else if(num == 2)
    {
        printf("Febuary");
    }


    else if(num == 3)
    {
        printf("March");
    }


    else if(num == 4)
    {
        printf("April");
    }


    else if(num == 5)
    {
        printf("May");
    }


    else if(num == 6)
    {
        printf("June");
    }


    else if(num == 7)
    {
        printf("July");
    }


    else if(num == 8)
    {
        printf("August");
    }


    else if(num == 9)
    {
        printf("September");
    }
    
    else if(num == 10)
    {
        printf("October");
    }


    else if(num == 11)
    {
        printf("November");
    }


    else if(num == 12)
    {
        printf("December");
    }
    else
    {
        printf("Invalid input !");
    }

}
