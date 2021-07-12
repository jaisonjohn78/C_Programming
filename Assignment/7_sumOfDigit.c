#include <stdio.h>
int main()
{
    int n,rem,i,sum=0;
    printf("Name: Jaison John\nRoll no.:053\n");
    printf("Enter a Integer value : ");
    scanf("%d",&n);
    i = n;

    while(n!=0)
    {
        rem = n % 10;
        sum = rem + sum;
        n = n / 10;
    }
    printf("\nThe sum of %d is = %d ",i,sum);
}