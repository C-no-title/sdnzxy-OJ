#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n,i;
    scanf("%d",&n);
    for(i=1;;i++)
    {
        if(i*i<=n)
        {
            n-=i*i;
        }
        else
        {
            break;
        }
    }
    printf("%d\n",i-1);
    return 0;
}
