#include<stdio.h>
#include<string.h>
#define N 6

int main(void)
{
    char str[N]={0};
    int len,i;

    fgets(str,N,stdin);
    str[strcspn(str,"\n")]='\0';

    len=strlen(str);
    printf("%d\n",len);
    for(i=0;i<len;i++)
    {
        printf("%c ",str[i]);
    }
    printf("\n");

    for(i=len-1;i>=0;i--)
    {
        printf("%c ",str[i]);
    }

    return 0;
}
