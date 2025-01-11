#include<stdio.h>
#define N 10

int main(void)
{
    int data[N][N],n,i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",(*(data+i)+j));
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            sum+=*(*(data+i)+j);
        }
    }
    printf("%d\n",sum);
    return 0;
}
