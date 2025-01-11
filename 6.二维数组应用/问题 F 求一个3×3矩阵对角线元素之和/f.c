#include<stdio.h>
#define N 3
int main(void)
{
    int data[N][N],i,j,sum=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&data[i][j]);
        }
    }
    for(i=N-1;i>-1;i--)
    {
        sum+=data[i][N-1-i];
    }
    printf("%d\n",sum);
    return 0;
}
