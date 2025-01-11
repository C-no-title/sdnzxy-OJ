#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 100000
int main(void)
{
    char str[N],temp[N];
    int i,j,flag;
    char *pstr=str;
    while(gets(pstr))
    {
        if(strcmp(pstr,"2013")==0)
            exit(0);
        for(i=0;pstr[i]!='\0';i++)
        {
            if(pstr[i]==' ')
            {
                for(j=i;pstr[j]!='\0';j++)
                {
                    pstr[i]=pstr[i+1];
                }
            }
        }
        flag=1;
        strcpy(temp,pstr);
        for(i=0;str[i]!='\0';i++)
        {
            if(temp[strlen(pstr)-1-i]!=pstr[i])
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
