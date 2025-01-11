#include<stdio.h>
#include<stdlib.h>
void Verify(int n);

int main(void)
{
    int n;
    scanf("%d",&n);
    Verify(n);
    return 0;
}

void Verify(int n)
{
    int i,j,x,c1=0,c2=0;
    for(i=2;i<n;i++)
    {
        c1=0;
        c2=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c1++;
            }
        }
        if(c1==2)
        {
            x=n-i;
        }
        else
        {
            continue;
        }
        for(j=1;j<=x;j++)
        {
            if(x%j==0)
            {
                c2++;
            }
        }
        if(c2==2)
        {
            printf("%d=%d+%d\n",n,i,x);
            exit(0);
        }
    }
}
