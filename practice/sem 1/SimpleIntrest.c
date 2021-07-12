#include <stdio.h>
int main()
{
    int principle,rate,time,SimpleIntrest;
    
    printf("Enter a value of Principle , Rate and Time  ");

    scanf("%d %d %d", &principle, &rate, &time);

    SimpleIntrest = (principle*rate*time)/100;

    printf("Answer of Simple Intrest is = %d",SimpleIntrest);

    return 0;
}