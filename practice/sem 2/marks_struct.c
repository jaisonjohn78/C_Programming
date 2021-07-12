#include <stdio.h>
struct student
{
    int rollno;
    float marks;

};
void main()
{
    struct student st[5];
    int i;
    printf("Enter Student details ");
    
    for(i=0;i<5;i++)
    {
        printf("\nRoll_NO:");
        scanf("%d",&st[i].rollno);
        printf("\nMarks:");
        scanf("%f",&st[i].marks);
    }

    printf("Student list info");
    for(i=0;i<5;i++)
    {
        printf("\n Roll No:%d \n Marks:%f %%\n\n\n\n",st[i].rollno,st[i].marks);
    }

}