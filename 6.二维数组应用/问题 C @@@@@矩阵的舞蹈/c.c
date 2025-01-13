#include<stdio.h>
#define N 100

int main(void)
{
    int a[N][N],i,j,t,m,n,k=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%*c%d",&m,&n);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Case #%d:\n",k++);
        for(j=0;j<n;j++)
        {
            for(i=m-1;i>=0;i--)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
}
