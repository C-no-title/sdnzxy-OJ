#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a,b;
    while(scanf("%d%*c%d",&a,&b))
    {
        if(a==0&&b==0)
        {
            exit(0);
        }
        printf("%d\n",a+b);
    }
    return 0;
}
