#include<stdio.h>
#include<ctype.h>
#define N 80

int main(void)
{
    char str1[N],str2[N];
    int i,j;
    gets(str1);
    for(i=0,j=0;str1[i]!='\0';i++)
    {
        if(!isdigit(str1[i])&&isdigit(str1[i+1]))
        {
            str2[j++]='*';
        }
        else if(!isdigit(str1[i])&&str1[i+1]=='\0')
        {
            str2[j++]='*';
        }
        else if(isdigit(str1[i]))
        {
            str2[j++]=str1[i];
        }
    }
    str2[j]='\0';
    puts(str2);
    return 0;
}
