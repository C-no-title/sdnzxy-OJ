#include<stdio.h>
#include<string.h>
#define N 100
int main(void)
{
    char str[N],c;
    int n,i,j;
    gets(str);
    c=getchar();
    n=strlen(str);
    for(i=0,j=0;j<n+1;j++)
    {
        if(str[j]!=c)
        {
           str[i++]=str[j];
        }
    }
    puts(str);
    return 0;
}
