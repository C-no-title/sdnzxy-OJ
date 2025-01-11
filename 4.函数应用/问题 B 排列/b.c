#include<stdio.h>
void order(int a,int b,int c);
int main(void)
{
    int a,b,c,d;
    scanf("%d%*c%d%*c%d%*c%d",&a,&b,&c,&d);
    order(a,b,c);
    order(a,b,d);
    order(a,c,d);
    order(b,c,d);
    return 0;
}

void order(int a,int b,int c)
{
    printf("%d %d %d\n",a,b,c);
    printf("%d %d %d\n",a,c,b);
    printf("%d %d %d\n",b,a,c);
    printf("%d %d %d\n",b,c,a);
    printf("%d %d %d\n",c,a,b);
    printf("%d %d %d\n",c,b,a);
}
