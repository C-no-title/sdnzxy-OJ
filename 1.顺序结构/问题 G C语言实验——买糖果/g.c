#include<stdio.h>
int main(void)
{
    int n,x,y;
    scanf("%d",&n);
    n=n*10;
    x=n/3;
    y=n%3;
    printf("%d %d",x,y);
    return 0;
}
