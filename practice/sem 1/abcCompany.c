//5.Write a program that accepts the car value and category of insurance from the user and calculates the premium to be paid.
#include <stdio.h>
int main()
{
    int car_value,pay;
    char choice;
    printf("Welcome to ABC Insurance company Ltd.");
    printf("\nEnter the value of your car \n");
    scanf("%d",&car_value);
    printf("We are offering 3 basic premium scheme");
    printf("\n Category A: @2%%");
    printf("\n Category B: @3%%");
    printf("\n Category C: @5%%");
    printf("\n\n\n Enter your choice");
    scanf("\n%c",&choice);
if(choice == 'a' || choice == 'A')
    {
        pay = car_value * 2 / 100;
        printf("The  premium to be paid is RS%d /- only for @2%%",pay);
    }
    else if(choice = 'b' || choice == 'B')
    {
        pay = car_value * 3 / 100;
        printf("The  premium to be paid is RS%d /- only for @3%%",pay);
    }
    else if(choice = 'c' || choice == 'C')
    {
        pay = car_value * 5 / 100;
        printf("The  premium to be paid is RS%d /- only for @5%%",pay);
    }
    else
    {
        printf("Sorry we don't have Extra scheme !");
    }
    

}