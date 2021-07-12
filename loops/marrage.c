#include<stdio.h>
int main()
{
   int age;
   char gender;
 printf("Enter gender and Age ");
   scanf("%c,%d",&gender,&age);
   if(gender == 'm' || 'f')
   {
    if(gender=='m' && age>=24)
    {
        printf("You can marry !");

        else
        printf("sorry boy");
    }
    if(gender=='f' && age>=20)
    {
        printf("you can marry !");
    }
    else if(gender != 'm' || 'f')
    {
        printf("enter valid gender");
    }
   }
    else 
    {
    printf("Sorry kid dont marry now :D");
    }
}
