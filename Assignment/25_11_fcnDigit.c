#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    printf("Enter string : \n");
    int digit(int,int);
    int N;
    int k;
    scanf("%d %d",&N,&k);
    printf("%d" ,digit(N,k));


    return N%10;
}
int digit(int N,int k)
{
    int i=1;
    while(i!=k)
    {
        N=N/10;
        i++;
    }
    return N%10;
}





