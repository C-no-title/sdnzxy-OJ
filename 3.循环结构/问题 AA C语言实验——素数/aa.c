#include<stdio.h>

int main(void)
{
    int n=0,i,j,x;

    for(i=100;i<=200;i++)
    {
        x=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                x++;
            }
        }
        if(x==2)
        {
            n++;

        }
    }
    printf("%d\n",n);
    for(i=100;i<=200;i++)
    {
        x=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                x++;
            }
        }
        if(x==2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
