#include<stdio.h>
void ReadData(int data[],int n);
void SortData(int data[],int n);
void PrintData(int data[],int n);

int main(void)
{
    int n,data[100];
    scanf("%d",&n);
    ReadData(data,n);
    SortData(data,n);
    PrintData(data,n);
    return 0;
}

void ReadData(int data[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&data[i]);
    }
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


