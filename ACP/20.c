//8
#include <stdio.h>
struct census
{
          char city[50];
          long int population;
          float li;
};

main()
{
          struct census temp,c[5];
          int i,p,j;
          for(i=0;i<5;i++)
          {
                    printf("\nenter city name, population and literacy level");
                    scanf("%s%ld%f",&c[i].city,&c[i].population,&c[i].li);    
          }
          for(p=0;p<4;p++)
          {
                    for(j=0;j<5-p-1;j++)
                    {
                              if(c[j].population >c[j+1].population)
                              {
                                        temp=c[j];
                                        c[j]=c[j+1];
                                        c[j+1]=temp;
                              }
                    }
          }
          printf("\nsorted order are\n");
          for(i=0;i<5;i++)
          {
                    printf("%s\t%ld\t%f\n",c[i].city,c[i].population,c[i].li);     
          }
}