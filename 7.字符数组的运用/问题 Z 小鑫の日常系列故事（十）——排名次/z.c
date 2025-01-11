#include<stdio.h>
#include<string.h>
#define M 50
#define N 10

int main(void)
{
    char name[M][N],temp[N];
    int score[M],i,j,n,k,t;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%s",name+i);
        getchar();
        scanf("%d",score+i);
    }
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(score[k]<score[j])
                k=j;
        }
        if(k!=i)
        {
            t=score[k];
            score[k]=score[i];
            score[i]=t;

            strcpy(temp,name[k]);
            strcpy(name[k],name[i]);
            strcpy(name[i],temp);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s %d\n",name[i],score[i]);
    }
    return 0;
}
