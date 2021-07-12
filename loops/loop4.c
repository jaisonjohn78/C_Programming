#include<stdio.h> 
void main()
{
    int i,j,rows;
 
    printf("Enter the no of rows\n");
    scanf("%d",&rows);
 
    for(i=rows;i>=1;i--)
    {
        for(j=rows;j>=i;j--)
        {
            printf("%d",j);
        }
 
        printf("\n");
    }
}