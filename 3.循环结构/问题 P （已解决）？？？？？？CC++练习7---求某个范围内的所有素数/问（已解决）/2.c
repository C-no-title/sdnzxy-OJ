#include<stdio.h>
int main(void)
{
    int n,i,j,x,y=0;
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
            printf("%d ",i);
            y++;
        }
        if(y%10==0)
        {
            printf("\n");
        }
    }
    return 0;
}
