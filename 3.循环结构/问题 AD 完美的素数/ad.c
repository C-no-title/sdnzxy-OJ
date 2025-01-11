#include<stdio.h>

int main(void)
{
    int n,x1,x2,x3,x4,x5,x6,flag,i,s;

    while(scanf("%d",&n)!=EOF)
    {
        int c1=0,c2=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                c1++;
            }
        }
        x6=n/100000;
        x5=(n-x6*100000)/10000;
        x4=(n-x6*100000-x5*10000)/1000;
        x3=n%1000/100;
        x2=n%100/10;
        x1=n%10;
        s=x1+x2+x3+x4+x5+x6;
        for(i=1;i<=s;i++)
        {
            if(s%i==0)
            {
                c2++;
            }
        }
        if(c1==2&&c2==2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
