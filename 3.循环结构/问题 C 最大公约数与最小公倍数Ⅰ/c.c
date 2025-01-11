#include<stdio.h>
int main(void)
{
    int n,i,a,b,x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%*c%d",&a,&b);
        for(x=a;x>0;x--)
        {
            if(a%x==0&&b%x==0)
            {
                printf("%d\n",x);
                break;
            }
        }
        for(y=a;;y++)
        {
            if(y%a==0&&y%b==0)
            {
                printf("%d\n",y);
                break;
            }
        }
    }
    return 0;
}
