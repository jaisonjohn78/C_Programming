#include<stdio.h>
int main()
{
    int n, max, min, elem;
    printf("Enter total number of elements n");
    scanf("%d",&elem);
    printf("Enter First number of n");
    scanf("%d", &n);
    max = n;
    min = n;

    for (int i = 1; i <= elem - 1; i++)
    {
        printf("Enter another number of n");
        scanf("%d",&n);
        if(n>max)
        max=n;
        if(n<min)
        min=n;
    }
        printf("The largest number is %d\n", max);
        printf("The smallest number is %d\n", min);
}