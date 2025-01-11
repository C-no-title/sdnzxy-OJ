#include<stdio.h>
int main(void)
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}
