#include<stdio.h>

int main()
{
int i,j,s,arr[5];

for(i=0;i<5;i++)
{
printf("Enter the elements:\n");
scanf("%d",&arr[i]);
}
printf("\nEnter the number to be searched:\n");
scanf("%d",&s);
for(i=0;i<5;i++)
{
if(arr[i]==s)
{
printf("\nElement found at %d position",i+1);
}
}
printf("Element not found");
return 0;

}