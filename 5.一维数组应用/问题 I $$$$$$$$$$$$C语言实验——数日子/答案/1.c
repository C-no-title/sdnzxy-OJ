#include <stdio.h>
#include <stdlib.h>

int main()
{
    int str1[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
    int str2[12]= {31,29,31,30,31,30,31,31,30,31,30,31};
    int num,year,month,day,i,sum;
    scanf("%d",&num);
    while(num--)
    {
        sum=0;
        scanf("%d %d %d",&year,&month,&day);
        if(month>=2)
        {
            if((year%4==0&&year%100!=0)||year%400==0)
            {
                for(i=0; i<month-1; i++)
                    sum+=str2[i];
            }
            else
            {
                for(i=0; i<month-1; i++)
                    sum+=str1[i];
            }
        }
        sum+=day;
        printf("%d\n",sum);
    }
    return 0;
}
