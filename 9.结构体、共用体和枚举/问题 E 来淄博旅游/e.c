#include<stdio.h>
#include<string.h>
#define N 100
#define M 21
typedef struct visitor
{
    char name[M];
    char from[M];
    char to[M];
}VIS;
void Check(VIS vis[],char place[][M],int n,int m);

int main(void)
{
    VIS vis[N];
    char Cfrom[N][M];
    char Cto[4][M]={"zichuan","linzi","zhoucun","boshan"};
    int n,i,j,k,flag;

    scanf("%d",&n);
    j=0;
    for(i=0;i<n;i++)
    {
        flag=0;
        scanf(" %s%s%s",vis[i].name,vis[i].from,vis[i].to);
        if(j==0)
            {
                strcpy(Cfrom[j++],vis[i].from);
            }
        else
            {
                for(k=0;k<j;k++)
                {
                    if(strcmp(Cfrom[k],vis[i].from)==0)
                        {
                            flag=1;
                            break;
                        }
                }
                if(flag==0)
                    strcpy(Cfrom[j++],vis[i].from);
            }
    }

    Check(vis,Cfrom,n,j);

    Check(vis,Cto,n,4);

    return 0;

}

void Check(VIS vis[],char place[][M],int n,int m)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        printf("%s :",place[i]);
        for(j=0;j<n;j++)
        {
            if(strcmp(place[i],vis[j].to)==0&&m==4)
            {
                printf(" %s",vis[j].name);
            }
            else if(strcmp(place[i],vis[j].from)==0)
            {
                printf(" %s",vis[j].name);
            }
        }
        printf("\n");
    }

}
