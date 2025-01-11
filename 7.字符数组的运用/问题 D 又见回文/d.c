#include<stdio.h>
#include<string.h>
#define N 100000
int main(void)
{
    char str[N],str1[N];
    int n,i,j;
    while(gets(str)&&strcmp(str,"2013")!=0)
    {
        n=strlen(str);
        for(i=0;i<n;i++)
        {
            if(str[i]==' ')
            {
                for(j=i;j<n;j++)
                {
                    str[j]=str[j+1];
                }
                str[--n]='\0';
            }
        }
        for(i=n-1;i>-1;i--)
        {
            str1[n-i-1]=str[i];
        }
        if(strcmp(str,str1)==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
