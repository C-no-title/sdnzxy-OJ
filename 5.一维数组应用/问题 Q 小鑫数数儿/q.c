#include<stdio.h>
void ReadData(int data[],int n);
int Aver(int data[],int n);
void Result(int data[],int n,int aver);

int main(void)
{
    int n,data[10],aver;
    while(scanf("%d",&n)!=EOF)
    {
        ReadData(data,n);
        aver=Aver(data,n);
        Result(data,n,aver);
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

int Aver(int data[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=data[i];
    }
    return sum/n;
}


void Result(int data[],int n,int aver)
{
    int i,low=0,large=0,equal=0;
    for(i=0;i<n;i++)
    {
        if(data[i]<aver)
        {
            low++;
        }
        else if(data[i]>aver)
        {
            large++;
        }
        else
        {
            equal++;
        }
    }
    printf("%d %d %d\n",low,equal,large);

}

















