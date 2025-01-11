#include<stdio.h>
#include<string.h>
#define N 10001

int main(void)
{
    char str[N],c;
    int num[N],i,j,m;
    while(fgets(str,N,stdin)!=NULL)
    {
        if(str[strlen(str)-1]=='\n')
            str[strlen(str)-1]='\0';
        for(i=0;i<N;i++)
            num[i]=1;
        c=str[0];
        for(i=0,j=0;str[i]!='\0';)
        {
            if(c==str[i+1])
            {
                num[j]++;
                for(m=i;str[m]!='\0';m++)
                {
                    str[m]=str[m+1];
                }
            }
            else
            {
                c=str[i+1];
                j++;
                i++;
            }
        }
        for(i=0,j=0;str[i]!='\0';i++,j++)
        {
            if(num[j]>1)
                printf("%d",num[j]);
            printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
