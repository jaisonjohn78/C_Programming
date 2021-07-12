#include <stdio.h>
 
void main()
{
    int i, num, odd = 0, even = 0;
    printf("Name: Jaison John\nRoll no.:053\n");
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
            even = even + i;
        else
            odd = odd + i;
    }
    printf("Sum of first 100 odd numbers  = %d\n", odd);
    printf("Sum of first 100 even numbers = %d\n", even);
}