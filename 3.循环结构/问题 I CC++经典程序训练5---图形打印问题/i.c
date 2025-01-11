#include<stdio.h>
int main(void)
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++)
    {
        if(i<=n)
        {
            for(j=1;j<=n-i;j++)
            {
                printf(" ");
            }
            for(j=1;j<=2*i-1;j++)
            {
                if(j==1||j==2*i-1)
                {
                    printf("+");
                }
                else
                {
                    printf("*");
                }
            }
        }
        else
        {
            for(j=1;j<=i-n;j++)
            {
                printf(" ");
            }
            for(j=1;j<=(4*n-1)-2*i;j++)
            {
                if(j==1||j==(4*n-1)-2*i)
                {
                    printf("+");
                }
                else
                {
                    printf("*");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
