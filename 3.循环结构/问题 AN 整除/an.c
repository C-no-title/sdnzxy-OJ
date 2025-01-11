#include<stdio.h>

int main(void)
{
    int n,i,c;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            if(i%5==0||i%6==0||i%8==0)
            {
               c++;
            }
        }
         printf("%d\n",c);
    }

    return 0;
}
