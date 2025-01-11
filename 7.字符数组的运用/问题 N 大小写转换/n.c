#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N 80+1

int main(void)
{
    char str[N];
    int i;
    while(fgets(str,N,stdin)!=NULL)
    {
        if(str[strlen(str)-1]=='\n')
            str[strlen(str)-1]='\0';
        for(i=0;str[i]!='\0';i++)
        {
            if(isupper(str[i]))
                str[i]=tolower(str[i]);
            else if(islower(str[i]))
                str[i]=toupper(str[i]);
        }
        puts(str);
    }
    return 0;
}
