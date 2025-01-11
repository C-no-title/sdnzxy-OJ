#include<stdio.h>
#include<ctype.h>
#define N 100
int main(void)
{
    char str[N],vow[6]="aeiou";
    int n,i,j;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        int num[5]={0};
        gets(str);
        for(i=0;str[i]!='\0';i++)
        {
            if(isalpha(str[i]))
            {
                for(j=0;vow[j]!='\0';j++)
                {
                    if(str[i]==vow[j])
                    {
                        num[j]++;
                        break;
                    }
                }
            }
        }
        for(i=0;vow[i]!='\0';i++)
        {
            printf("%c:%d\n",vow[i],num[i]);
        }
        printf("\n");
    }
    return 0;
}

