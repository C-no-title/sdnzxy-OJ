#include<stdio.h>
#define PI 3.1415926
int main(void)
{
    float r,h,C,S1,S2,V;
    scanf("%f %f",&r,&h);
    C=2*PI*r;
    S1=PI*r*r;
    S2=C*h;
    V=S1*h;
    printf("%.2f %.2f %.2f %.2f",C,S1,S2,V);
    return 0;
}
