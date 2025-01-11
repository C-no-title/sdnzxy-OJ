#include<stdio.h>
void ReadData(int data[]);
void Print(int data[]);

int main(void)
{
    int data[10];
    ReadData(data);
    Print(data);
    return 0;
}

void ReadData(int data[])
{
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&data[i]);
    }
}

void Print(int data[])
{
    int i;
    for(i=9;i>-1;i--)
    {
        printf("%d ",data[i]);
    }
}
