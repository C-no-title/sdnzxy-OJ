#include<stdio.h>
#define N 50
int main(void)
{
    int n,i;
    char str[N];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(str);
        if(isalpha(str[0])||str[0]=='_')
        {
            for(i=1;str[i]!='\0';i++)
            {
                if(!isalnum(str[i])&&str[i]!='_')
                {
                    printf("no\n");
                    break;
                }
            }
            if(str[i]=='\0')
                printf("yes\n");
        }
        else
            printf("no\n");
    }
    return 0;
}
