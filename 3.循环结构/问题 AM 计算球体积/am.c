#include<stdio.h>
#define PI 3.1415927

int main(void)
{
    float r;

    while(scanf("%f",&r)!=EOF)
    {
        printf("%.3f\n",4.0/3*PI*r*r*r);
    }
    return 0;
}
