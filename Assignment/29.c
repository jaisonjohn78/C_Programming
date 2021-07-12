#include<stdio.h>
int main()
{
    FILE* fptr;
    char file[50] = { "text.txt" };
    char ch;
    fptr = fopen(file, "r");
    ch = fgetc(fptr);
    while (ch != EOF) 
    {
        ch = toupper(ch);
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}
