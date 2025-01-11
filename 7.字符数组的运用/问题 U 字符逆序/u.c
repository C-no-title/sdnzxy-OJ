#include<stdio.h>
#include<string.h>
#define N 100
int main(void)
{
    char str1[N],str2[N];
    int i,j;
    gets(str1);
    for(i=strlen(str1)-1,j=0;i>-1;i--)
    {
        str2[j++]=str1[i];
    }
    str2[j]='\0';
    puts(str2);
    return 0;
}
