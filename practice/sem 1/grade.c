//10.Write a program to display the grade according to the marks entered by the user using else-if ladder.


#include <stdio.h>
int main()
{
    int marks;
    printf("\n Enter your marks : ");
    scanf("%d",&marks);
    printf("\nYour grade is = ");

    if(marks<35)
    printf("FAIL");
    else if(marks<=55) 
    printf("C");
    else if(marks<=45) 
    printf("C+");
    else if(marks<=65) 
    printf("B");
    else if (marks<=75) 
    printf("B+");
    else if(marks<=85)
    printf("A");
    else if(marks<=100) 
    printf("A++");
    else
    printf("error");

}