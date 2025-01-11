#include<stdio.h>
#include<stdlib.h>
#define N 10

int main(void)
{
    int a[N][N],i,j,u,m,n,x,y,max,min;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        max=a[i][0];
        for(j=0;j<n;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
                y=j;
                x=i;

            }
        }
        min=a[0][y];
        for(u=0;u<m;u++)
        {
            if(min>a[u][y])
            {
                min=a[u][y];
            }
        }
        if(max==min)
        {
            printf("Array[%d][%d]=%d",x,y,max);
            exit(0);
        }
    }
    printf("None");
    return 0;
}
