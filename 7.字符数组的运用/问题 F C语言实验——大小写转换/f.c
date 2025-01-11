#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N 80

int main(void)
{
    char str[N];
    int n,i;
    gets(str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            str[i]=tolower(str[i]);
        else if(str[i]>='a'&&str[i]<='z')
            str[i]=toupper(str[i]);
    }
    puts(str);
    return 0;
}
