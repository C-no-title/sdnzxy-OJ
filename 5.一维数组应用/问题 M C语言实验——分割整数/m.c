#include<stdio.h>
#include<math.h>
int Find(long x);
void Sort(int data[],int n,long x);
void Print(int data[],int n);

int main(void)
{
    int data[10],n;
    long x;
    scanf("%d",&x);
    n=Find(x);
    Sort(data,n,x);
    Print(data,n);
    return 0;
}

int Find(long x)
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(x<pow(10,i))
        {
            return i;
        }
    }
}

void Sort(int data[],int n,long x)
{
    int i;
    for(i=0;i<n;i++)
    {
        data[i]=x%10;
        x=x/10;
    }
}

void Print(int data[],int n)
{
    int i;
    for(i=n-1;i>-1;i--)
    {
        printf("%-2d",data[i]);
    }
}









