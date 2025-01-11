#include<stdio.h>
#define N 10000

struct Data
{
    int w;
    int p;
};

int main(void)
{
    int n,i,j,t,k,m;
    struct Data data[N];
    struct Data *pd[N],*temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&data[i].w);
        pd[i]=data+i;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&data[i].p);
    }

    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(pd[k]->w>pd[j]->w)
                {
                    k=j;
                }
        }
        if(k!=i)
        {
            temp=pd[k];
            pd[k]=pd[i];
            pd[i]=temp;
        }

    }

    for(i=0;i<n-1;i++)
    {
        if(pd[i+1]->w==pd[i]->w)
        {
            m=2;
            for(j=i+m;j<n;j++)
            {
                if(pd[i]->w==pd[j]->w)
                {
                    m++;
                }
                else
                {
                    break;
                }
            }

            for(j=i;j<i+m-1&&j<n;j++)
            {
                k=j;
                for(t=j+1;t<i+m&&t<n;t++)
                {
                    if(pd[k]->p<pd[t]->p)
                    {
                        k=t;
                    }
                }
                if(k!=j)
                {
                    temp=pd[k];
                    pd[k]=pd[j];
                    pd[j]=temp;
                }
            }
            i=i+m-1;
        }

    }

    for(i=0;i<n;i++)
    {
        printf("%d %d\n",pd[i]->w,pd[i]->p);
    }

    return 0;
}
