#include<stdio.h>
#include<math.h>
int main()
{
    int n,p=2,x,y;
    float s,N,D;

    printf("\nEnter how many Terms you want to print ");
    scanf("%d %d",&x,&y);
    printf("1 +");
    for(int i=1; i<n; i++)
    {
        N=pow(x,p);
        D=pow(y,p);
        s=N/D;
        printf("%f+",s);
        p = p+2;

    }
}