#include<stdio.h>
int main (void)
{
    int x,y,z;
    scanf("%d%*c%d%*c%d",&x,&y,&z);
    if (x>=y&&y>=z)
    {
        printf("%d %d %d",z,y,x);
    }
    else if (y>=x&&x>=z)
    {
         printf("%d %d %d",z,x,y);
    }
    else if (y>=z&&z>=x)
    {
        printf("%d %d %d",x,z,y);
    }
    else if (x>=z&&z>=y)
    {
        printf("%d %d %d",y,z,x);
    }
    else if (z>=x&&x>=y)
    {
        printf("%d %d %d",y,x,z);
    }
    else
    {
        printf("%d %d %d",x,y,z);
    }
    return 0;
}
