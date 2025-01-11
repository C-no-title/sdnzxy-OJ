#include<stdio.h>
int main(void)
{
    int x,y,max;
    scanf("%d%*c%d",&x,&y);
    max=x>y?x:y;
    printf("max=%d",max);
    return 0;
}
