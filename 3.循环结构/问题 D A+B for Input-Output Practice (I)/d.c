#include<stdio.h>
int main(void)
{
    int a,b;
    while(scanf("%d%*c%d",&a,&b)!=EOF)
    {
        printf("%d\n",a+b);
    }
    return 0;
}
