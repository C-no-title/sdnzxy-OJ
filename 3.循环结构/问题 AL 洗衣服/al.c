#include<stdio.h>

int main(void)
{
    int L,W;

    while(scanf("%d%*c%d",&L,&W)!=EOF)
    {
        printf("%d\n",L/W);
    }
    return 0;
}
