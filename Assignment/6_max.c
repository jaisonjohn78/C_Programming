#include <stdio.h>
int main()
{
    int a,b;
     printf("Name: Jaison John\nRoll no.:053\n");
     printf("Enter two numbers :");
     scanf("%d %d",&a,&b);

     if(a<b)
     printf("%d is greater than %d",a,b);
     else
     printf("%d is greater than %d",b,a);
}