#include<stdio.h>
int Find(int x);

int main(void)
{
    int n,i,j,c;
    while(scanf("%d",&n)&&n)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                c=Find(i)/(Find(j)*Find(i-j));
                printf("%d ",c);
            }
            printf("\n");
        }
        printf("\n");
    }

}

int Find(int x)
{
    int i,sum=1;
    if(x==0)
    {
        return 1;
    }
    else
    {
        for(i=1;i<=x;i++)
        {
            sum*=i;
        }
        return sum;
    }

}
