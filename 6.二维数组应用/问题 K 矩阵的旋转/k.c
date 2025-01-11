#include<stdio.h>
#define N 10
int main(void)
{
    int m,n,i,j,a[N][N];
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        for(j=0;j<n;j++)
        {
            for(i=m-1;i>-1;i--)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
