#include<stdio.h>
#include<math.h>
int main(void)
{
    int n,i=1,a,max=0;
    scanf("%d",&n);
    while(i<=n&&scanf("%d",&a))
    {
        i++;
        if(fabs(a)>=max)
        {
            max=a;
        }
    }
    printf("%d",max);
    return 0;
}
