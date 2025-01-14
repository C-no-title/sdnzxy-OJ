#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 100000
int main(void)
{
    char str[N];
    int i,j,flag,n;
    char *pstr=str;
    while(gets(pstr))
    {
        if(strcmp(pstr,"2013")==0)
            exit(0);
        for(i=0;pstr[i]!='\0';i++)
        {
            while(pstr[i]==' ')
            {
                for(j=i;pstr[j]!='\0';j++)
                {
                    pstr[j]=pstr[j+1];
                }

            }
        }

        n=strlen(pstr);
        flag=1;
        for(i=0;i<=n/2-1;i++)
        {
            if(pstr[i]!=pstr[n-1-i])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
