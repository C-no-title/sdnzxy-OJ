#include<stdio.h>
#define N 100
void del(char str[],char *x);

int main(void)
{
    char str[N],x;
    scanf("%s",str);
    getchar();
    scanf("%c",&x);
    del(str,&x);
    puts(str);
    return 0;
}

void del(char str[],char *x)
{
    int i,j;
    for(i=0,j=0;i<N;i++)
    {
        if(str[i]!=*x)
        {
            str[j++]=str[i];
        }
    }
    str[j]='\0';
}
