#include <stdio.h>
void main()
{
    int i,j,rows;
    printf("Enter the no of lines\n");
    scanf("%d",&rows);
 
    for(i=1;i<=rows;i++)
    {
        for(j=rows;j>=i;j--)
        {
            printf("%d",j);
        }
         printf("\n");
    }
}