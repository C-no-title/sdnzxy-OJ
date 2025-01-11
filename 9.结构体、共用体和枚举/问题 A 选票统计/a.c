#include<stdio.h>
#define M 1000
#define N 30000
typedef struct candidate
{
    int number;
    int counter;
}CAN;

int main(void)
{
    CAN cand[M];
    int m,n,i,j,k;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        cand[i].number=i+1;
        cand[i].counter=0;
    }
    while(n--)
    {
        scanf("%d",&j);
        cand[j-1].counter++;
    }
    for(i=1;i<m;i++)
    {
        k=0;
        if(cand[k].counter<cand[i].counter)
        {
            k=i;
        }
    }
    printf("%d\n%d\n",cand[k].number,cand[k].counter);
    return 0;
}
