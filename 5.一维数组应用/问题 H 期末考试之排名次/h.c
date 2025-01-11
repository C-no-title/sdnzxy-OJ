#include<stdio.h>
void DataSort(int a[],int n);

int main(void)
{
    int n,i,j,a[100],b,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=1;j<=3;j++)
        {
            scanf("%d",&b);
            sum+=b;
        }
        a[i]=sum;
    }
    DataSort(a,n);
    return 0;
}

void DataSort(int a[],int n)
{
    int i,j,k,temp;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(a[k]<a[j])
            {
                k=j;
            }
        }
        if(k!=i)
        {
            temp=a[k];
            a[k]=a[i];
            a[i]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}






