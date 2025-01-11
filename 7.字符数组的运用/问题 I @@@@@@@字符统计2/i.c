#include<stdio.h>
#include<string.h>
#define N 100
#define M 'z'+1

int main(void)
{
    char str[N],c;
    int i,k;
    while(gets(str)!=NULL)
    {
        int number[M]={0};
        for(i=0;str[i]!='\0';i++)
        {
            number[str[i]]++;
        }
        k='A';
        for(i=M-1;i>='A';i--)
        {

            if(number[i]>=number[k])
                k=i;
        }
        printf("%c %d\n",k,number[k]);
    }
    return 0;
}
