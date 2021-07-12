#include <stdio.h>
#include <math.h>

int main()
{
        int t, a, b, sqrt_a, sqrt_b, max_a, max_b, result;
    
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        
        sqrt_a = sqrt(a);
        sqrt_b = sqrt(4*b+1);
        
        max_a = sqrt_a;
        max_b = (sqrt_b-1)/2;
        
        if(max_a > max_b)
            printf("Limak");
        else
            printf("Bob");
    }

    return 0;
}