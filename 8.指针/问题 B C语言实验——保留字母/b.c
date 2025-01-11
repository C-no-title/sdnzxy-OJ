#include<stdio.h>
#include<ctype.h>
#define N 80

int main(void)
{
    char str[N];
    int i,j;
    char *pstr=str;
    gets(pstr);
    for(i=0,j=0;pstr[i]!='\0';i++)
    {
        if(isalpha(pstr[i]))
        {
            pstr[j++]=pstr[i];
        }
    }
    pstr[j]='\0';
    puts(pstr);
    return 0;
}
