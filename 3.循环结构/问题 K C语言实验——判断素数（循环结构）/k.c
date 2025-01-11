#include<stdio.h>
int main(void)
{
    int n=0,i,x;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            n++;
        }
    }
    if(n==2)
    {
        printf("This is a prime.");
    }
    else
    {
        printf("This is not a prime.");
    }
    return 0;
}
