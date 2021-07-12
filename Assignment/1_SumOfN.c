#include <stdio.h>
int main()
{
    int n,i,sum=0;

    printf("Name: Jaison John\nRoll no.:053\n");
    printf("Enter the N value");
    scanf("%d",&n);
    i=1;
    
    
    while(i<=n)
    {
        sum += i;
        i++;
    }
    printf("sum of %d (N) = %d ",n,sum);
}