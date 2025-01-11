#include<stdio.h>
#define N 10
void ReadData(int data[],int loc[]);
void SortData(int data[],int loc[]);

int main(void)
{
    int data[N],location[N];
    ReadData(data,location);
    SortData(data,location);
    return 0;
}

void ReadData(int data[],int loc[])
{
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&data[i]);
        loc[i]=i+1;
    }
}

void SortData(int data[],int loc[])
{
    int i,j,k,temp;
    for(i=0;i<N-1;i++)
    {
        k=i;
        for(j=i+1;j<N;j++)
        {
            if(data[k]>data[j])
            {
                k=j;
            }
        }

        temp=data[k];
        data[k]=data[i];
        data[i]=temp;

        temp=loc[k];
        loc[k]=loc[i];
        loc[i]=temp;
    }
    for(i=0;i<N;i++)
    {
        printf("%d ",data[i]);
    }
    printf("\n");
    for(i=0;i<N;i++)
    {
        printf("%d ",loc[i]);
    }
}
