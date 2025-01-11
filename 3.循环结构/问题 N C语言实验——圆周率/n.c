#include<stdio.h>
int main (void)
{
    int n,i;
    float PI=0,x=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=x+1/(float)(4*i-3)-1/(float)(4*i-1);
    }
    PI=4*x;
    printf("%.5f",PI);
    return 0;
}
