#include<stdio.h>

int main(void)
{
    int a1,b1,c1,a2,b2,c2;
    float x1,x2,x3;

    while(scanf("%d%*c%d%*c%d%*c%d%*c%d%*c%d",&a1,&b1,&c1,&a2,&b2,&c2)!=EOF)
    {
        if(a1+b1>c1&&a1+c1>b1&&b1+c1>a1&&a2+b2>c2&&a2+c2>b2&&b2+c2>a2);
        else
        {
            printf("NO\n");
            continue;
        }

        x1=(float)a1/a2;
        x2=(float)b1/b2;
        x3=(float)c1/c2;

        if(x1==x2&&x2==x3)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
