//  4.Write a program to calculate bill of a job work done as follows.Use if else statement.
#include <stdio.h>
int main()
{
    int copy,type;

    printf("Enter the Numbers of typing Pages \n");
    scanf("%d",&type);

    printf("Enter the number of pages to print ");
    scanf("%d",&copy);

    if(type < 0)
    printf("Invalid typing pages value :");
    else
    type = type*3;

    if(copy < 0)
    printf("your totall amount is %d ",type);
    else{
        if(copy >= 1)
        copy= 5+(--copy*3);
        else
        copy = 0;
    }
    printf("typing charges is : %d",type);
    printf("printing charges is : %d ",copy);
    printf("Total cost is = %d",type+copy);
}