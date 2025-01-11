#include<stdio.h>
#include<ctype.h>
#define N 100

int main(void)
{
    char str[N];
    int count=0,i,j=0;
    gets(str);
    for(i=0;str[i]!='\0';)
    {
        while(!isalpha(str[i])&&str[i]!='\0')
        {
            i++;
        }
        while(!isspace(str[i])&&str[i]!='\0')
        {
            i++;
        }
        count++;
    }
    if(str[i-1]==' ')
        printf("%d",count-1);
    else
        printf("%d",count);
    return 0;
}
