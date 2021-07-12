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
        printf("\nYou can marry !");
        goto greet;
    }
    if(gender=='m' && age<24)
    {
        goto final;
    }
   if(gender=='f' && age>=20)
    {
        printf("\nyou can marry !");
        goto greet;
    }
   if(gender=='f' && age<20)
    {
        goto final;
    }
    if(gender != 'm' || 'f')
    {
        printf("\nenter valid gender");
        goto greet;
    }
    final:
    printf("Sorry you can't marry");
   }
    greet:
    printf("\nThank You !");
}
