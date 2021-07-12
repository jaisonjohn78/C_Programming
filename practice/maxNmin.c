#include <stdio.h>
#include <limits.h>
main()
{
    int min = 32767, max = -32768,a[3][3];

    printf("\nEnter Elements of Matrix \n");
    scanf("%d", &a[0][0]);

    max=a[0][0],min=a[0][0];

    for(int i=0; i<3; i++)
    {
        printf("\n");
        for(int j=0; j<3; j++)
        {
            scanf("%d", a[i][j]);

            if(max<a[i][j])
            max=a[i][j];
            else
            if(min>a[i][j]&&a[i][j]!= max)
            min = a[i][j];
        }
    }
    printf("Max = %d \t Min = %d", max, min);
}