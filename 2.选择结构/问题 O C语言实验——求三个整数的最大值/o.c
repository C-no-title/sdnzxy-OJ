#include<stdio.h>
int main (void)
{
    int x,y,z,max;
    scanf("%d%*c%d%*c%d",&x,&y,&z);
    if (x>=y&&x>=z)
    {
        max=x;
    }
    else if (y>=x&&y>=z)
    {
         max=y;
    }
    else
    {
        max=z;
    }
    printf("max=%d",max);
    return 0;
}
