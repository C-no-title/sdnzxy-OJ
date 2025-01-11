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
    return 0;
}

int Find(int x)
{
    if(x==0||x==1)
        return 1;
    else
        return x*Find(x-1);
}
