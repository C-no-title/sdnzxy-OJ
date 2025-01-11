#include<stdio.h>
#include<math.h>
float fib(float n,int m);

int main(void)
{
    float n;
    int m;
    while(scanf("%f%*c%d",&n,&m)!=EOF)
    {
        printf("%.2f\n",fib(n,m));
    }
    return 0;
}

float fib(float n,int m)
{
    if(m==1)
    {
        return n;
    }
    else
    {

        return n+fib(sqrt(n),m-1);
    }
}






