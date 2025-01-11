#include<stdio.h>
void ReadData(int data[],int n);
void SortData(int data[],int n,int m);

int main(void)
{
    int n,m,data[100];
    scanf("%d",&n);
    ReadData(data,n);
    scanf("%d",&m);
    SortData(data,n,m);
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

void SortData(int data[],int n,int m)
{
    int i,j,temp[100];
    for(i=n-m,j=0;i<n,j<m;i++,j++)
    {
        temp[j]=data[i];
    }
    for(i=n-m-1;i>-1;i--)
    {
        data[i+m]=data[i];
    }
    for(i=0;i<m;i++)
    {
        data[i]=temp[i];
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }
}
