#include<stdio.h>

int main(void)
{
    int n,i,a,b;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d%*c%d",&a,&b);
        printf("%d\n",a+b);

    }
    return 0;
}
