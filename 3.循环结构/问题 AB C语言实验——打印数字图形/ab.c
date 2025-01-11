#include<stdio.h>

int main(void)
{
    int n,i,j,x;

    scanf("%d",&n);

    for(i=1;i<=2*n-1;i++)
    {
        if(i<=n)
        {
            for(j=1;j<=n-i;j++)
            {
                printf(" ");
            }
            for(x=1;x<=i;x++)
            {
                printf("%d",x);
            }
            if(x==i+1&&x!=1)
            {
                for(x=i-1;x>=1;x--)
                {
                    printf("%d",x);
                }

            }
        }
        else
        {
            for(j=1;j<=(i-1)-(n-1);j++)
            {
                printf(" ");
            }
            for(x=1;x<=n-(i-n);x++)
            {
                printf("%d",x);
            }
            if(x==n-(i-n)+1&&x!=1)
            {
                for(x=n-(i-n)-1;x>=1;x--)
                {
                    printf("%d",x);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
