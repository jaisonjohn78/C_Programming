#include<stdio.h>
struct student
{
    char name[30];
    int rollno;
};
void main()
{
    struct student stud;
    printf("Enter Rollno:");
    scanf("%d",&stud.rollno);
    printf("\nEnter Your Name");
    scanf("%s",&stud.name);

    printf("\n Name : \t%s \nRoll No: \t%d",stud.name,stud.rollno);
}