//  1.Write a program to check whether the number is positive.

#include <stdio.h>
void main()
{
    int num;
    printf("\nEnter an integer number\n ");
    scanf("\n%d",&num);

    if(num>=0)
    {
        printf("\n%d is a positive number!",num);
    }
    else
    {
        printf("\n%d is a negative number!",num);
    }
}
