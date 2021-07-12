//    8. Write a program to implement calculator using switch case.
#include <stdio.h>
int main()
{
  int num1,num2;
  char x;
  int ans = 0;
    printf("\n ENTER TWO NUMBERS : ");
    scanf("%d %d", &num1, &num2);
    printf("\n ADD, SUB,MULTI,DIV (+,-,*,/) : ");
    scanf(" %c" ,&x);
    switch(x)
    {
        case'+':
          ans = num1 + num2; 
          break;
          case '-':
          ans= num1 - num2;
          case '*':
          ans= num1 * num2;
          break;
          case '/':
          ans=num1 / num2;
          break;
          default :
           printf("Invalid operator");
    }
    printf("%d %c %d = %d", num1, x, num2, ans);
}
        