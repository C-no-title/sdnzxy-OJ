#include<stdio.h>
#include<ctype.h>
#define N 100

int main(void)
{
    char str[N];
    int flag=1,i;
    gets(str);
    if(!isalpha(str[0])&&str[0]!='_')
    {
        flag=0;
    }
    else
    {
        for(i=1;str[i]!='\0';i++)
        {
            if(!isalnum(str[i])&&str[i]!='_')
            {
                flag=0;
                break;
            }
        }
    }
    if(flag)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
