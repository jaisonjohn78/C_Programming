#include <stdio.h>
struct student
{
    char firstName[30];
    int roll;
    float marks;
} s[10];

int main()
{
    printf("Enter information of students:\n");
    for (int i = 0; i < 10; ++i)
    {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        fflush(stdin);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\t\tDisplaying Information:\n\n");

    for (int i = 0; i < 10; ++i)
    {
        printf("\nRoll number: %d\t\t", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("\tMarks: %.2f\n", s[i].marks);
    }
    return 0;
}