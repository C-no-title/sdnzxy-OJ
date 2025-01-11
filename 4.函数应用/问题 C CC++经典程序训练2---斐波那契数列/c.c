#include<stdio.h>
int fib(int n);

int main(void)
{
    int n,x;
    scanf("%d",&n);
    printf("%d\n",fib(n));
    return 0;
}

int fib(int n)
{
    int x1=1,x2=1,a,b,y,i;
    for(i=3;i<=n;i++)
    {
        a=x1;
        b=x2;
        y=b+a;
        x1=b;
        x2=y;
    }
    return y;
}
