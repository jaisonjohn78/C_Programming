#include <stdio.h>
int main()
{
    float length;
    float speed;
    
    printf("Enter the length of video\n"); // if length 2:30 input 2.30
    scanf("%f", &length);
    printf("\nEnter the speed of the video \n\t\t0 - 5.0");
    scanf("%f", &speed);
    
    if(speed>0 && speed<=5)
    {
        length=length/speed;
    }
    else{
        printf("Enter vaild input");
    }
    printf("\nyour video length %.2f and you are watching at x%.2f speed",length,speed);
    
}