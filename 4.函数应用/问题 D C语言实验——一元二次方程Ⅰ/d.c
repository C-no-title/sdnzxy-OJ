#include<stdio.h>
#include<math.h>
#define EPS 1e-6

int main(void)
{
    double x1,x2,disc,a,b,c;

    scanf("%lf%*c%lf%*c%lf",&a,&b,&c);

    disc=b*b-4*a*c;
    x1=(-b+sqrt(disc))/(2*a);
    x2=(-b-sqrt(disc))/(2*a);

    if(fabs(disc)<=EPS)
    {
        printf("%.2lf",x1);
    }
    if(disc>EPS)
    {
        printf("%.2lf %.2lf\r",x1>x2?x1:x2,x1>x2?x2:x1);
    }
    return 0;
}
