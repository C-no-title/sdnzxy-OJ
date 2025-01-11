#include<stdio.h>

int main(void)
{
    int n,i,j,m,count=0;

    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        m=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                m++;
            }
        }

        if(m==1)
        {
            count++;
            printf("%d ",i);

            if(count%10==0)
                printf("\n");

        }
    }

    return 0;
}
