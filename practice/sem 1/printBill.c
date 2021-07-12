#include <stdio.h>
int main()
{
    int pg,prt,bill;

    printf("Enter no. of pages to write:");
    scanf("%d",&pg);

    printf("Enter how many pages you want to print:");
    scanf("%d",&prt);

    if(prt==0)
    {
        bill = 3 * pg;
        printf("Thank you \n your totall is %d rs.",bill);
    }
    else
    {
        bill = ((pg*3)+(pg*5*1)+(pg)*(3*(prt-1)));
        printf("Thank you \n your totall is %d rs.",bill);
    }

} 