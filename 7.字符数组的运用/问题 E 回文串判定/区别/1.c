#include<stdio.h>
#include<string.h>
#define N 100
int main(void)
{
    char str[N],str1[N];
    int n,i;
    gets(str);
    n=strlen(str);
    for(i=n-1;i>-1;i--)
        str1[n-1-i]=str[i];
    if(strcmp(str1,str)==0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
