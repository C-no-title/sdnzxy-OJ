#include<stdio.h>
int main(void)
{
    int n,i,j,m=0,x,y=0,a[10000];
    scanf("%d",&n);
    n--;
    for(i=2;i<=n;i++)
    {
        x=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                x++;
            }
        }
        if(x==2)
        {
            a[m++]=i;
            y++;
        }
    }
    for(i=0;i<y;i++)
    {
        if((i+1)%10!=0)
        {
            printf("%d ",a[i]);
        }
        else
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}
