#include<stdio.h>
int fib(int m,int n);

int main(void)
{
    int x,i,m,n,y;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%d%*c%d",&m,&n);
        printf("%d\n",fib(m,n));
    }
    return 0;
}
int fib(int m,int n)
{
    if(m==1)
        return n;
    if(n==1)
        return m;
    else
        return fib(m-1,n)+fib(m,n-1);
}
