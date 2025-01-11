#include<stdio.h>
int Sum(int day[],int b,int c);
int main(void)
{
    int i,j,n,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%*c%d%*c%d",&a,&b,&c);
        if(a%4==0&&a%100!=0||a%400==0)
        {
            int day1[12]={31,29,31,30,31,30,31,31,30,31,30,31};
            printf("%d\n",Sum(day1,b,c));
        }
        else
        {
            int day2[12]={31,28,31,30,31,30,31,31,30,31,30,31};
            printf("%d\n",Sum(day2,b,c));
        }
    }
    return 0;
}


int Sum(int day[],int b,int c)
{
    int i,sum=0;
    for(i=0;i<b-1;i++)
    {
        sum+=day[i];
    }
    return sum+c;
}
