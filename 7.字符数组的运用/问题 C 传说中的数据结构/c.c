#include<stdio.h>
#include<string.h>
#define N 5
#define T 1000
int main(void)
{
    int n,data[T]={0},i;
    char str[N];
    while(scanf("%d",&n)!=EOF)
    {
        i=-1;
        while(n--)
        {
            getchar();
            scanf("%s",str);
            if(strcmp(str,"push")==0)
            {
                scanf("%d",&data[++i]);
            }
            else if(strcmp(str,"top")==0)
            {
                if(data[0]==0)
                    {
                        printf("empty");
                        continue;
                    }
                else
                    printf("%d\n",data[i]);


            }
            else if(strcmp(str,"pop")==0)
            {
                if(data[0]==0)
                    {
                        printf("error");
                        continue;
                    }
                else
                    data[i--]=0;
            }
        }
        printf("\n");
    }
    return 0;
}
