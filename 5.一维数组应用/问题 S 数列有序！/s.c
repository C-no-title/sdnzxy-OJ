#include<stdio.h>
#include<stdlib.h>
void ReadData(int data[],int n,int m);
void SortData(int data[],int n);
void PrintData(int data[],int n);

int main(void)
{
    int n,m,data[100];
    while(scanf("%d%*c%d",&n,&m))
    {
        if(n==0&&m==0)
            exit(0);
        ReadData(data,n,m);
        SortData(data,n+1);
        PrintData(data,n+1);
        printf("\n");
    }
    return 0;
}

void ReadData(int data[],int n,int m)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&data[i]);
    }
    data[n]=m;
}

void SortData(int data[],int n)
{
    int i,j,k,temp;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(data[k]>data[j])
            {
                k=j;
            }
        }
        temp=data[k];
        data[k]=data[i];
        data[i]=temp;
    }
}

void PrintData(int data[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }
}













