#include<stdio.h>
int Check(int x);
void Print(int data[],int x,int n);
void Opposite(int data[],int n);

int main(void)
{
    int x,n,data[5];
    scanf("%d",&x);
    n=Check(x);
    printf("%d\n",n);
    Print(data,x,n);
    printf("\n");
    Opposite(data,n);
    printf("\n");
    return 0;
}

int Check(int x)
{
    if(x>10000)
        return 5;
    else if(x>1000)
        return 4;
    else if(x>100)
        return 3;
    else if(x>10)
        return 2;
    else
        return 1;
}

void Print(int data[],int x,int n)
{
    int b1,b2,b3,b4,b5,i;
    data[4]=x/10000;
    data[3]=x/1000-b5*10;
    data[2]=x%1000/100;
    data[1]=x%100/10;
    data[0]=x%10;
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",data[i]);
    }
}

void Opposite(int data[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }
}
