#include<stdio.h>
void ReadData(int sort[]);
void DataSort(int sort[],int n);

int main(void)
{
    int n=10,sort[10];
    ReadData(sort);
    DataSort(sort,n);

}

void ReadData(int sort[])
{
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&sort[i]);
    }
}

void DataSort(int sort[],int n)
{
    int i,j,k,primary[10],temp1,temp2;
    for(i=0;i<n;i++)
    {
        primary[i]=i+1;
    }
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(sort[k]>sort[j])
            {
                k=j;
            }
        }
        if(k!=i)
        {
            temp1=sort[k];
            sort[k]=sort[i];
            sort[i]=temp1;
            temp2=primary[k];
            primary[k]=primary[i];
            primary[i]=temp2;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",sort[i]);
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",primary[i]);
    }
}
