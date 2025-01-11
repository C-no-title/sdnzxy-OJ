#include<stdio.h>
#define N 20
int main(void)
{
    int n,i,j,flag,a[N][N];
    while(scanf("%d",&n)&&n)
    {
        flag=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]!=a[j][i])
                    {
                        flag=0;
                        break;
                    }
            }
        }
        if(flag)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
