#include<stdio.h>
int main(void)
{
    int a,b;
    while(scanf("%d%*c%d",&a,&b)!=EOF)
    {
        printf("%d",a+b);
        printf("\n\n");
    }
    return 0;
}
