/*    3.Write a program to check whether the blood donor is eligible or not for donating blood. 
Use if statement.*/

#include <stdio.h>
int main()
{
    int age,weight;

    printf("Enter the Blood Donor's Age and Weight");
    scanf("%d %d",&age,&weight);

    if(weight>45 && age>=18 && age<=55)
    {
        printf("You are eligible to donate !");
    }
     else
    {
        printf("you are not eligible to donate !!");
    }
    
}

