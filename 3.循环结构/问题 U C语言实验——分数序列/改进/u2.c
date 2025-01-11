#include<stdio.h>
int main(void)
{
    int n,i;
    double s=0,x=1,y=2,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            s+=y/x;
            temp=y;
            y+=x;
            x=temp;

        }
    printf("%.6lf\n",s);
    return 0;
}
