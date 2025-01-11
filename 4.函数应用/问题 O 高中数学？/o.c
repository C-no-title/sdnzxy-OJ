#include<stdio.h>
int fib(int n);

int main(void)
{
    int t,i,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        printf("%d\n",fib(n));
    }
    return 0;
}

int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    else
    {
        return 4*fib(n-1)-5*fib(n-2);
    }
}
