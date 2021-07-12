#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    printf("Enter the String for Scaning :\n");
    int  palindrome(char*);
    char s1[20];
    char s2[20];
    gets(s1);
    fflush(stdin);
    gets(s2);
   if((palindrome(s1)==1)&&palindrome(s2)==1)
   {
       printf("Both String are Palindrome");
   }else
   {
       printf("Both String Are not Palindrome");
   }
   getch();
    return 0;
}
int palindrome(char *n)
{
    int i;
    int l=strlen(n);
    for(i=0;i<l/2;i++)
    {
        if(n[i]!=n[l-1-i])
            break;
    }
    if(i==l/2)
        return 1;
    else
        return 0;
}