#include<stdio.h>

int main()
{
int i,sum=0,avg=0,a[10];
printf("Name: Jaison John\nRoll no.:053\n");
for(i=0;i<10;i++)
{ 
printf("Enter the number to be stored at %d\n",i);
scanf("%d",&a[i]);
sum=sum+a[i];
avg=sum/10;
}
printf("\nSum is %d",sum);
printf("\nAverage is %d",avg);
return 0;
}