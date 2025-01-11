#include<stdio.h>
#define N 1000
struct member
{
    char name[20];
    int h;
    int w;
};

int Check(struct member mem[],struct member *pmem[],int n,int hmin,int hmax,int wmin,int wmax);
void SortH(struct member *pmem[],int n);
void SortW(struct member *pmem[],int n);


int main(void)
{
    struct member mem[N];
    struct member *pmem[N]={NULL};
    int n,n1,i,hmin,hmax,wmin,wmax;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf(" %s %d %d",mem[i].name,&mem[i].h,&mem[i].w);
    }
    scanf("%d%d%d%d",&hmin,&hmax,&wmin,&wmax);
    n1=Check(mem,pmem,n,hmin,hmax,wmin,wmax);
    SortH(pmem,n1);
    SortW(pmem,n1);
    for(i=0;i<n1;i++)
    {
        printf("%s %d %d\n",pmem[i]->name,pmem[i]->h,pmem[i]->w);
    }
    return 0;
}

int Check(struct member mem[],struct member *pmem[],int n,int hmin,int hmax,int wmin,int wmax)
{
    int i,j;
    for(i=0,j=0;i<n;i++)
    {
        if(mem[i].h>=hmin&&mem[i].h<=hmax&&mem[i].w>=wmin&&mem[i].w<=wmax)
        {
            pmem[j++]=mem+i;
        }
    }
    return j;
}

void SortH(struct member *pmem[],int n)
{
    int i,j,k;
    struct member *temp;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(pmem[k]->h>pmem[j]->h)
            {
                k=j;
            }
        }
        if(k!=i)
        {
            temp=pmem[k];
            pmem[k]=pmem[i];
            pmem[i]=temp;
        }
    }
}

void SortW(struct member *pmem[],int n)
{
    int i,j,t,k,m,l;
    struct member *temp;
    for(i=0;i<n-1;i++)   //考虑到越界,注意此处（i<n-1）
    {
        m=2;
        k=i;
        if(pmem[i]->h==pmem[i+1]->h)
        {
            for(j=i+m;j<n;j++)
            {
                if(pmem[i]->h==pmem[j]->h)
                {
                    m++;
                }
                else
                {
                    break;
                }
            }

            for(;i<k+m-1&&i<n;i++)
            {
                l=i;
                for(t=i+1;t<k+m&&t<n;t++)
                {
                    if(pmem[l]->w>pmem[t]->w)
                    {
                        l=t;
                    }
                    if(l!=i)
                    {
                        temp=pmem[l];
                        pmem[l]=pmem[i];
                        pmem[i]=temp;
                    }
                }
            }
            i=j-1;
        }
    }
}
