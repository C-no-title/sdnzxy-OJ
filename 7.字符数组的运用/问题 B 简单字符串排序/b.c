#include<stdio.h>
#include<string.h>
#define M 10
#define N 20
void Sort(char name[][N],int score[M]);

int main(void)
{
    char name[M][N];
    int i,score[M];
    for(i=0;i<M;i++)
    {
        scanf("%s",name+i);
    }
    for(i=0;i<M;i++)
    {
        scanf("%d",score+i);
    }
    Sort(name,score);
    for(i=0;i<M;i++)
    {
        printf("%s,%d\n",*(name+i),*(score+i));
    }

}

void Sort(char name[][N],int score[M])
{
    int i,j,k,temp1;
    char temp[N];
    for(i=0;i<M-1;i++)
    {
        k=i;
        for(j=i+1;j<M;j++)
        {
            if(strcmp(name[k],name[j])>0)
            {
                k=j;
            }
        }
        if(i!=k)
        {
            strcpy(temp,name[k]);
            strcpy(name[k],name[i]);
            strcpy(name[i],temp);

            temp1=score[k];
            score[k]=score[i];
            score[i]=temp1;
        }
    }
}
