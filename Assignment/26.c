#include<stdio.h>
#include<stdlib.h>

struct employee
{
    char name[50];
    char Place[50];
    float salary;
} emp;

int main()
{
    int n, chars;
    FILE *fp;

    fp = fopen("C:/sxca/c/Assignment/text.txt", "wb");

    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }


    printf("\n\nEnter the number of records you want to enter: ");
    scanf("%d", &n);

    while(n--)
    {

        printf("\nEnter details of employee %d \n", n + 1 );

        fflush(stdin);

        printf("Name: ");
        gets(emp.name);

        printf("Designation: ");
        gets(emp.Place);

        printf("Salary: ");
        scanf("%f", &emp.salary);

        chars = fwrite(&emp, sizeof(emp), 1, fp);
        printf("Number of items written to the file: %d\n", chars);
    }
    return 0;
}

