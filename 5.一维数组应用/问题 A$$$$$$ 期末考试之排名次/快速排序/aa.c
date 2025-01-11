#include<stdio.h>
#include<stdlib.h>
#define N 100

int cmp(const void* a,const void* b)
{
    return *(int*)b-*(int*)a;
}

int main(void)
{
    int n,score[N]={0},a,b,c,i,k,j,temp;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        score[i]=a+b+c;
    }

    qsort(score,n,sizeof(int),cmp);//IMPORTANT!!

    for(i=0;i<n;i++)
    {
        printf("%d\n",score[i]);
    }

    return 0;
}
