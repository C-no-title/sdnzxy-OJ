#include<stdio.h>
double a[15],h,sum;//a[i]表示第i次撞地弹起高度
int main()
{
    int n;
    scanf("%lf %d",&h,&n);
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        a[i]=h*1.0/2;
        else
        a[i]=a[i-1]*1.0/2;
    }
    for(int i=0;i<n;i++)//第n此撞地不会反弹，只求撞地之前
    {
        if(i==0)
        sum+=h;//最开始只有下去
        else
        sum+=2*a[i];//每次都要有下去上来两个过程
    }
    printf("%.2f %.2f",sum,a[n]);
}
