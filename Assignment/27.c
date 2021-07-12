
#include <stdio.h>

int main ()
{
   FILE *fp;
   int len;

   fp = fopen("text.txt", "r");
   if( fp == NULL )  {
      perror ("Error opening file");
      return 0;
   }
   fseek(fp, 0, SEEK_END);

   len = ftell(fp);
   fclose(fp);

   printf("Total size of text.txt = %d bytes\n", len);
  
   return 0;
}
