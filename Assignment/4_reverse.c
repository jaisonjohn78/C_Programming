#include <stdio.h>
int main()
{
    int n,rev=0;
    printf("Name: Jaison John\nRoll no.:053\n");
    printf("Enter a Number !");
    scanf("%d",&n);
    
    while(n!=0)
    {
        rev = rev * 10;
        rev = rev + n % 10;
        n =  n / 10;
    }
    printf("Reversed no. is = %d ",rev);
}