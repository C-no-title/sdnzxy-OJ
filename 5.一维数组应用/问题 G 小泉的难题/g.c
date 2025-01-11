#include<stdio.h>
void DataSort(int a[],int n);

int main(void)
{
    int a[100];
    int m,n,i,j;
    scanf("%d%*c%d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        DataSort(a,n);
        printf("\n");
    }
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
            if(a[k]>a[j])
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
        printf("%d ",a[i]);
    }
}




















