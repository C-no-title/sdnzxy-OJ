#include<stdio.h>
#define N 20
int main(void)
{
    int n,data[N][N],i,j,flag;
    while(scanf("%d",&n)&&n)
    {
        flag=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",(*(data+i)+j));
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(data[i][j]!=data[j][i])
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
