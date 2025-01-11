#include<stdio.h>

int main(void)
{
    int i,n,data[100000],sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&data[i]);
    }
    for(i=0;i<n;i++)
    {
        if((i+1)%2==1)
        {
            sum1+=data[i];
        }
        else
        {
            sum2+=data[i];
        }
    }
    if(sum1>sum2)
    {
        printf("Greater than\n");
    }
    else if(sum1<sum2)
    {
        printf("Less than\n");
    }
    else
    {
        printf("Equal\n");
    }
    return 0;
}












