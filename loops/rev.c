#include <stdio.h>
int main()
{
    int i,j,no=0,rows=0;
    printf("Enter the rows no.:");
    scanf("%d",&rows);
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            no++;
            printf("%d  ",no);
        }
        printf("\n");
    }

}


