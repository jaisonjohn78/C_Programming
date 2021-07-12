//9
#include <stdio.h>
#include <conio.h>
#include <string.h>
union car
{
  char name[10];
  int price;
};

int main()
{
    union car n;
    printf("\nEnter Car Price: ");
    scanf("%d",&n.price);
    printf("\n\t\tCar Name:\t\tBMW A46  ");
    printf("\n\t\tCar Price:\t\t$%d ",n.price);

  return 0;
}