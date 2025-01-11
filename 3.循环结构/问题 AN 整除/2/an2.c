#include<stdio.h>

int main(void)
{
    int n,s;

    while(scanf("%d",&n)!=EOF)
    {
        s=n/5+n/6+n/8;
        printf("%d\n",s);
    }

    return 0;
}
