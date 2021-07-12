#include<stdio.h>
#include<conio.h>

int main()
{
   char s1[20];
   gets(s1);
   int i;
   for(i=0;s1[i];i++);
   printf("Length:%d",i);

    return 0;
}


