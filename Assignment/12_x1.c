#include <stdio.h>
int main()
{
    int x,n;
    int fact=1,sum=0;
    printf("Name: Jaison John\nRoll no.:053\n");
    printf("x:");
    scanf("%d",&x);
    printf("n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            fact = fact*x;
        }
        sum = sum + fact;
        fact=1;
    }
    printf("%d",sum);

return 0;
}