#include<stdio.h>
#include<stdlib.h>
int main()
{
        char name[50];
        int marks,i,n;
        printf("Enter number of students: ");
        scanf("%d",&n);
        FILE *fptr;
        fptr=(fopen("C:/sxca/c/Assignment/text.txt","w"));
        if(fptr==NULL) {
                printf("\nError!");
                exit(1);
        }
        for (i=0;i<n;++i) {
                printf("\nFor student%d\nEnter name: ",i+1);
                scanf("%s",name);
                fflush(stdin);
                printf("Enter marks: ");
                scanf("%d",&marks);
                fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
        }
        fclose(fptr);
        return 0;
}

