#include<stdio.h>
#include<math.h>

int main(void)
{
    int t,i,j,n;
    float h,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%f%*c%f",&h,&n);
        s=h;
        for(j=1;j<n;j++)
        {
            s+=h;
            h/=2;
        }
        printf("%.2f %.2f\n",s,h/2);
    }
    return 0;
}

