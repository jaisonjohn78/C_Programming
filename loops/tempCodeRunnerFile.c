#include<stdio.h>
 
void main()
{
    int i,j,n;
 
    printf("Enter the no of rows\n");
    scanf("%d",&rows);
 
    for(i=1;i<=rows;i++)
    {
        for(j=i;j<=rows;j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}