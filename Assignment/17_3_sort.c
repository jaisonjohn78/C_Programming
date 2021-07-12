#include<stdio.h>

int main()
{
int i,j,temp=0,arr[5];

for(i=0;i<5;i++)
{
printf("Enter the elements:\n");
scanf("%d",&arr[i]);
}
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("\n");
printf("Elements of array sorted in ascending order:\n");
for(i=0;i<5;i++)
{
printf("\n%d",arr[i]);
}
}