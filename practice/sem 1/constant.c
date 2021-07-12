/*  7. Write a program to enter a character through keyboard. Use switch() case structure and print appropriate message. 
       Recognize the entered character whether it is vowel, consonant or symbol.       */
#include <stdio.h>
int main()
{
    char ch;
     
    printf("Enter a character: \n");
    scanf("%c",&ch);
     
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        switch(ch)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c is a VOWEL.\n",ch);
                break;
            default:
                printf("%c is a CONSONANT.\n",ch);            
        }
    }
    else
    {
        printf("%c is a Symbol.\n",ch);
    }
    return 0;
}