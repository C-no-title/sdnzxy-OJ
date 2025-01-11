#include<stdio.h>
#include<math.h>
double function();
int main(void)
{
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        printf("%.2lf\n",(int)(function()*100+0.5)/100.0);
    }
    return 0;
}

double function()
{
    double x,y;
    scanf("%lf",&x);
    if(x>0&&x<10)
    {
        y=log2(x);
    }
    else if(x<0)
    {
        y=fabs(x)+sin(x);
    }
    else if(x==0)
    {
        y=0;
    }
    else
    {
        y=pow(x,2.0);
    }
    return y;
}
