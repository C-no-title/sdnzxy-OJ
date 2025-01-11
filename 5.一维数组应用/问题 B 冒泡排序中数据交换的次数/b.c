#include<stdio.h>
void ReadData(int bubble[],int n);
int BubbleSort(int bubble[],int n);
int main(void)
{
    int t,i,j,n,bubble[100];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        ReadData(bubble,n);
        printf("%d\n",BubbleSort(bubble,n));
    }
    return 0;
}
void ReadData(int bubble[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&bubble[i]);
    }
}
int BubbleSort(int bubble[],int n)
{
    int i,k,temp,count=0;
    int flag=0;
    for(i=0;i<n-1;i++)
    {
        for(k=0;k<n-1;k++)
        {
            if(bubble[k]>bubble[k+1])
            {
                flag=1;
                temp=bubble[k+1];
                bubble[k+1]=bubble[k];
                bubble[k]=temp;
                count++;
            }
        }
        if(!flag)
            break;
        else
            flag=0;
    }
    return count;
}








