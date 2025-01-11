#include<stdio.h>
int main(void)
{
    int a1,a2,a3,x;
    scanf("%d",&x);
    a3=x/100;
    a2=(x-a3*100)/10;
    a1=(x-a3*100)%10;
    printf("%d",a1*100+a2*10+a3);
    return 0;
}
