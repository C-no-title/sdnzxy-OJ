#include<stdio.h>
#include<stdlib.h>
void ReadScore(int score[],int n);
void SortData(int score[],int n);
void Find(int score[],int n,int h);

int main(void)
{
    int n,h,score[10];
    while(scanf("%d",&n)!=EOF)
    {
        ReadScore(score,n);
        h=score[0];
        SortData(score,n);
        Find(score,n,h);

    }
    return 0;
}

void ReadScore(int score[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&score[i]);
    }
}

void SortData(int score[],int n)
{
    int i,k,j,temp;
    for (i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(score[k]>score[j])
            {
                k=j;
            }
        }
        temp=score[k];
        score[k]=score[i];
        score[i]=temp;
    }
}

void Find(int score[],int n,int h)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(score[i]==h)
        {
            printf("%d\n",i+1);
            break;
        }
    }
}
























