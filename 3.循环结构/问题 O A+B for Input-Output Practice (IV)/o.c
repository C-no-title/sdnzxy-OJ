#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n,i,sum=0,x;
    while(scanf("%d",&n))
    {
        sum=0;
        if(n==0)
        {
            exit(0);
        }
        for(i=1;i<=n;i++)
        {
            scanf("%d",&x);
            sum=sum+x;
        }
        printf("%d\n",sum);
    }
    return 0;
}
