#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    
 printf("Name: Jaison John\nRoll no.:053\n");
 printf("Enter a number: ");    
  scanf("%d",&number);    
 
    for(i=1;i<=number;i++)
    {    
      fact=fact*i;    
    }    
  printf("Factorial of %d is: %d",number,fact);    
return 0;  
}   