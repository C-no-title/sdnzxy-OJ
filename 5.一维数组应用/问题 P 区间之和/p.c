#include<stdio.h>
void ReadData(int data[],int n);
void Print(int data[],int L,int R);

int main(void)
{
    int n,R,L,data[10000];
    scanf("%d",&n);
    ReadData(data,n);
    scanf("%d%*c%d",&L,&R);
    Print(data,L,R);
}

void ReadData(int data[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&data[i]);
    }
}

void Print(int data[],int L,int R)
{
    int i,sum=0;
    for(i=L-1;i<=R-1;i++)
    {
        sum+=data[i];
    }
    printf("%d",sum);
}
