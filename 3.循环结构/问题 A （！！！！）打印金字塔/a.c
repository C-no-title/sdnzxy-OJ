#include <stdio.h>
int main(void)
{
    int i,n,k,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(j=i-1;j>0;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
