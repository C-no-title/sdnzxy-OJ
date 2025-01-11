#include<stdio.h>
void ReadData(int data[],int n);
void SortData(int data[],int n);
void PrintData(int data[],int n);

int main(void)
{
    int n,data[10];
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
    int i,temp,k=0;
    for(i=0;i<n;i++)
    {
        if(data[k]>data[i])
        {
            k=i;
        }
    }
    temp=data[k];
    data[k]=data[0];
    data[0]=temp;

    k=n-1;
    for(i=0;i<n;i++)
    {
        if(data[k]<data[i])
        {
            k=i;
        }
    }
    temp=data[k];
    data[k]=data[n-1];
    data[n-1]=temp;


}

void PrintData(int data[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }
}
