#include<stdio.h>
int main(void)
{
    int a,b,c,x,y;
    float z;
    a,b,c>0;
    scanf("%d %d %d",&a,&b,&c);
    x=a+b+c;
    y=a*b*c;
    z=(float)x/3;
    printf("%d %d %.2f",x,y,z);
    return 0;

}
