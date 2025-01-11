#include<stdio.h>
int main(void)
{
    int m,n,x,a,b,c,flag;
    while(scanf("%d",&m)!=EOF&&scanf("%d",&n)!=EOF)
    {
        flag=0;
        for(x=m;x>=m&&x<=n;x++)
        {
            a=x/100;
            b=(x-a*100)/10;
            c=x%10;
            if(x==a*a*a+b*b*b+c*c*c)
            {
                printf("%d ",x);
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("no");
        }
        printf("\n");
    }
    return 0;
}
