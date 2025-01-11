#include<stdio.h>

int main(void)
{
    int N,i,x1,y1,x2,y2,x3,y3,counter;

    while(scanf("%d",&N)!=EOF)
    {
        i=1;
        counter=0;

        scanf("%d%*c%d",&x1,&y1);
        scanf("%d%*c%d",&x2,&y2);

        while(i<=N&&scanf("%d%*c%d",&x3,&y3))
        {
            i++;
            if(x3>x1&&x3<x2&&y3>y1&&y3<y2)
            {
                counter++;
            }

        }
        printf("%d\n",counter);
    }
    return 0;
}
