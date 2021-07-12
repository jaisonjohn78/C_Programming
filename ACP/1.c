#include <stdio.h>
#include <conio.h>

struct info
{
    char name[25];
    int roll_no;
    float marks;
};

void main()
{
    struct info i;

    printf("\nEnter Name:\t");
    scanf("%c",i.name);
    fflush(stdin);
    printf("\nEnter Roll no:\t");
    scanf("%d",&i.roll_no);
    printf("\nEnter Marks:\t");
    scanf("%f",&i.marks);
    getch();
}