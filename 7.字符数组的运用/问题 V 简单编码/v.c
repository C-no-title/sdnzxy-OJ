#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define N 100

int main(void)
{
    char str[N],num[11]="9876543210",str1[N];
    int n,i,j;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(isupper(str[i]))
        {
            str[i]=tolower(str[i]);
        }
        else if(islower(str[i]))
        {
            str[i]=toupper(str[i]);
        }
        else if(isdigit(str[i]))
        {
            n=str[i]-'0';
            str[i]=num[n];
        }
    }
    for(i=strlen(str)-1,j=0;i>-1;i--)
    {
        str1[j++]=str[i];
    }
    str1[j]='\0';
    puts(str1);
    return 0;
}
