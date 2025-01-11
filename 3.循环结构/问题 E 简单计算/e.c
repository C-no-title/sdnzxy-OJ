#include<stdio.h>
int main(void)
{
    int N,i,a,max=0,min=10000000,sum=0,x;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a);
        if(a>=max)
        {
            max=a;
        }
        if(a<=min)
        {
            min=a;
        }
        sum=sum+a;
    }
    x=sum/N;
    printf("%d %d %d",max,min,x);
    return 0;
}
