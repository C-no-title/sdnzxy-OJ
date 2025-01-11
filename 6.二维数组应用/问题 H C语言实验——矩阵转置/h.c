#include<stdio.h>
#define N 100
int main(void)
{
    int a[N][N],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
