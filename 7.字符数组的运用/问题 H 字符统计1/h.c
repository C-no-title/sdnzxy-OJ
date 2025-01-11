#include<stdio.h>
#include<ctype.h>
#define N 10000

int main(void)
{
    char str[N];
    int i,a,b,c,d;
    while(gets(str)!=NULL)
    {
        a=0;
        b=0;
        c=0;
        d=0;
        for(i=0;str[i]!='\0';i++)
        {
            if(isalpha(str[i]))
                a++;
            else if(isdigit(str[i]))
                b++;
            else if(isspace(str[i]))
                c++;
            else
                d++;
        }
        printf("%d %d %d %d\n",a,b,c,d);
    }
    return 0;
}
