#include<stdio.h>
#include<stdlib.h>

int main()
{
    int year,month;
    printf("请输入年和月（格式为年\\月）:");
    scanf("%d%*c%d",&year,&month);
    if (month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        printf("31");
        exit (0);
    }
    if (month==4||month==6||month==9||month==11)
    {
        printf("30");
        exit (0);
    }
    if (month==2)
    {
        if(year%4==0&&year%100!=0||year%400==0)
        {
            printf("29");
            exit (0);
        }
        else
        {
            printf("28");
            exit (0);
        }
    }
    return 0;
}
