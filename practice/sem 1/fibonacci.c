#include <stdio.h>
#include <conio.h>
int main()
{
        int n,num1 = 0,num2 = 1,temp;

    printf("\nEnter the number of terms\n");
    scanf("%d",&n);
    
    for(int i=0; i<=n;i++)
    {
        printf("%d   ",num1);
        temp = num1 + num2;
        num1 = num2;
        num2 = temp;

    }
 
}