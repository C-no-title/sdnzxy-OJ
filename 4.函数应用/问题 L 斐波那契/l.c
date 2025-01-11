#include<stdio.h>
int fib(int n);

int main(void)
{
    int N;
    scanf("%d",&N);
    printf("%d",fib(N));
    return 0;
}

int fib(int n)
{
    if(n==1)
    {
        return 2;
    }
    if(n==2)
    {
        return 3;
    }
    if(n==3)
    {
        return 5;
    }
    else
    {
        return fib(n-1)+fib(n-2)-fib(n-3);
    }
}
