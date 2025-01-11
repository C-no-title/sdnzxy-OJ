#include<stdio.h>
#include<ctype.h>
#define N 80
int main(void)
{
    char str[N];
    int i;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(isalpha(str[i]))
            printf("%c",str[i]);

    }
    return 0;
}
