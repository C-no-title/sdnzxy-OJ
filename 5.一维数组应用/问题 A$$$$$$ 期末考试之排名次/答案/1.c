#include <stdio.h>
int main ()
{
    int a[100],b,t=0,sum[100]={0},j;
    int i,n;
    scanf("%d",&n);
    for (j=0;j<n;j++)
    {

        for (i=0;i<3;i++)
        {
            scanf("%d",&a[i]);
            sum[j]+=a[i];
        }


    }
    for (b=1;b<n;b++)
        {
            for (j=0;j<n-b;j++)
            {
                if(sum[j]<sum[j+1])
                {
                    t=sum[j];
                    sum[j]=sum[j+1];
                    sum[j+1]=t;

                }
            }
        }
        for (j=0;j<n;j++)
        {

            printf("%d\n",sum[j]);

        }
}
