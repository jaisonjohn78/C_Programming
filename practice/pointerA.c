#include <stdio.h>

int main()
{
    int a[5] = {10,20,30,40,50};
    int *ptr;

    ptr = &a[0];            // ptr = a;

    for(int i=0; i<5 ; i++)
    {
    printf("\n%d",*ptr);
    ptr++;              // ptr = ptr + 1 
    }

}