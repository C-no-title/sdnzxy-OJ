#include<stdio.h>

int main(void)
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=9;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
