#include<stdio.h>
#define PI 3.1415926
int main(void)
{
    float r,h;
    scanf("%f %f",&r,&h);
    printf("%.2f %.2f %.2f %.2f",2*PI*r,PI*r*r,2*PI*r*h,PI*r*r*h);
    return 0;
}
