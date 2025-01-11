#include<stdio.h>
int main(void)
{
    int n,i,p=1;
    scanf("%d",&n);
    if(n==0)
    {
        printf("1");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            p*=i;
        }
        printf("%d",p);
    }
    return 0;
}
