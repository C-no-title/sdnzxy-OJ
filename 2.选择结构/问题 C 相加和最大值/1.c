#include<stdio.h>

int main()
{
    int x,y,z,X,Y,Z;
    scanf("%d%*c%d%*c%d",&x,&y,&z);

    X=x+y;
    Y=x+z;
    Z=y+z;

    if (X>Y&&X>Z)
    {
        printf("%d",X);
    }
    else if (Y>X&&Y>Z)
    {
        printf("%d",Y);
    }
    else
    {
        printf("%d",Z);
    }
    return 0;
}
