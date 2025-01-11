#include<stdio.h>

int main(void)
{
    int a,b;

    while(scanf("%d%*c%d",&a,&b)!=EOF)
    {
        if(a>0&&b>0)
        {
            printf("1\n");
        }
        else if(a<0&&b>0)
        {
            printf("2\n");
        }
        else if(a<0&&b<0)
        {
            printf("3\n");
        }
        else
        {
            printf("4\n");
        }
    }
    return 0;
}
