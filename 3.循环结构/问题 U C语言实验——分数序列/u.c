#include<stdio.h>
int main(void)
{
    int n,i,a=1,b=1,x,y;
    float c,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        y=a+b;
        x=a;
        c=(float)y/x;
        a=y;
        b=x;
        s+=c;
    }
    printf("%.6f\n",s);
    return 0;
}
