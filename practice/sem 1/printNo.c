#include <stdio.h>
int main()
{
    int i;
    i=1;
    int sum=0;
    while(i<=10000000000000)
    {
        sum = sum + i;
        printf("%d\n",i);
        i++;
    }
}