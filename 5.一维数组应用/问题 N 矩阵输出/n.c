#include<stdio.h>
void Read(int data[],int n);
void Sort(int data[],int n);
void Print(int data[],int n);

int main(void)
{
    int n,data[20];
    scanf("%d",&n);
    Read(data,n);
    Sort(data,n);
    return 0;
}

void Read(int data[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&data[i]);
    }
}

void Sort(int data[],int n)
{
    int i,j,temp;
    Print(data,n);
    for(i=1;i<=n-1;i++)
    {
        temp=data[n-1];
        for(j=n-1;j>-1;j--)
        {
            data[j]=data[j-1];
        }
        data[0]=temp;
        Print(data,n);
    }
}

void Print(int data[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }
    printf("\n");
}
