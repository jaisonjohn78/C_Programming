#include <stdio.h>

int main() {
   int array[12] = {71 ,79 ,79 ,68 ,32 ,77 ,79 ,82 ,78 ,73 ,78 ,71};
   int loop;

   for(loop = 0; loop < 10; loop++)
      printf("<%ls> ", array[loop]);
      
   return 0;
}