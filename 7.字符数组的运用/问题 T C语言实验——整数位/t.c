#include<stdio.h>
#include<string.h>
#define N 6

int main(void)
{
    char str[N];
    int i;
    fgets(str,N,stdin);
    if(strlen(str)<N-1||str[N-2]=='\n')
    {
        str[strlen(str)-1]='\0';
    }
    printf("%d\n",strlen(str));
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c ",str[i]);
    }
    printf("\n");
    for(i=strlen(str)-1;i>-1;i--)
    {
        printf("%c ",str[i]);
    }
    return 0;
}
