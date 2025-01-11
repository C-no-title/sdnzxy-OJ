#include<stdio.h>
#include<stdlib.h>
#define N 100
typedef struct member
{
    char name[20];
    int h;
}MEB;

int main(void)
{
    int a,b,i,j,l,k,n;
    MEB x[N];
    MEB *px[N]={NULL},*temp=NULL;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf(" %s%d",&x[i].name,&x[i].h);
    }
    scanf("%d%d",&a,&b);

    /*筛出符合要求的人*/
    for(i=0,j=0;i<n;i++)
    {
        if(x[i].h>=a&&x[i].h<=b)
        {
            px[j++]=x+i;
        }
    }

    /*无合格人选*/
    if(px[0]==NULL)
    {
        printf("No");
        exit(0);
    }

    //指针排序
    for(i=0;i<j-1;i++)
    {
        k=i;
        for(l=i+1;l<j;l++)
        {
            if(px[k]->h>px[l]->h)
            {
                k=l;
            }
        }
        if(k!=i)
        {
            temp=px[k];
            px[k]=px[i];
            px[i]=temp;
        }
    }

    for(i=0;i<j;i++)
        printf("%s %d\n",px[i]->name,px[i]->h);

    return 0;
}
