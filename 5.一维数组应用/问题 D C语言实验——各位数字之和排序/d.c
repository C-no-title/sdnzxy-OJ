#include<stdio.h>
#include<stdlib.h>
void ReadData(int data[],int n);
void DataSort(int data[],int n);
int Transform(int a);

int main(void)
{
    int data[10];
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            exit(0);
        }
        ReadData(data,n);
        DataSort(data,n);
    }
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

void DataSort(int data[],int n)
{
    int i,j,k,temp1,temp2;
    int data2[10];
    for(i=0;i<n;i++)
    {
        data2[i]=Transform(data[i]);
    }
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(data2[k]>data2[j])
            {
                k=j;
            }
        }
        if(k!=i)
        {
            temp1=data[k];
            data[k]=data[i];
            data[i]=temp1;
            temp2=data2[k];
            data2[k]=data2[i];
            data2[i]=temp2;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }
    printf("\n");
}


int Transform(int a)
{
    int b1,b2,b3;
    b3=a/100;
    b2=(a-b3*100)/10;
    b1=a%10;
    return b1+b2+b3;
}
