#include <stdio.h>

int main()
{

    int a,b,c;

    printf("Enter values for A B and C");
    scanf("%d %d %d",&a,&b,&c);


    printf("maxiumum value is : %d", a>b?a>c?a:c:b>c?b:c);

    // if(a > b && a > c)
    //        printf("A is bigger");
    // if(b > a && b > c)
    //        printf("B is bigger");
    // if(c > a && c > b)
    //        printf("C is bigger");

}