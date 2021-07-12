#include<stdio.h>
int main()
{
int i,j,n;
printf("Name: Jaison John\nRoll no.:053\n");
printf("Enter the number of rows:");
scanf("%d\n",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
printf("%d",j);
for(j=1;j>=1;j--)
{
printf("%d",j);
}
printf("\n");
}
return 0;
}