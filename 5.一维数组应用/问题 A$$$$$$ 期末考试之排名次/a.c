#include<stdio.h>
void ReadScore(int a[],int n);
void PrintScore(int a[],int n);

int main(void)
{
    int n;
    scanf("%d",&n);
    int a[100];
    ReadScore(a,n);
    PrintScore(a,n);
    return 0;
}

void ReadScore(int a[],int n)
{
    int i,C,M,E;
    for(i=0;i<n;i++)
    {
        scanf("%d%*c%d%*c%d",&C,&M,&E);
        a[i]=C+M+E;
    }
}
void PrintScore(int a[],int n)
{
    int i,j,max;
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                max=a[j];
                a[j]=a[i];
                a[i]=max;
            }
        }
    }
    for(j=0;j<n;j++)
    {
        printf("%d\n",a[j]);
    }
}
