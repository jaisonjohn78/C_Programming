#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Name: Jaison John\nRoll no.:053\n");
    int a,b,i;
    scanf("%d%d",&a,&b);
    int big = a>b?a:b;
    for(i=big;i<=a*b;i=i+big)
    {
        if(i%a==0 && i%b==0)
        {
            printf("lcm:%d hcf:%d",a*b/i);
            break;
        }
    }
}