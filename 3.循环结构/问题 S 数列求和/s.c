#include<stdio.h>
#include<math.h>
int main(void)
{
    int n,i,j,a,b,s=0;
    scanf("%d",&a);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        b=0;
        for(j=1;j<=i;j++)
        {
            b+=pow(10,j-1)*a;
        }
        s+=b;
    }
    printf("%d",s);
    return 0;
}
