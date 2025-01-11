#include<stdio.h>
#include<string.h>
#define N 19
#define M 100000
struct Data
{
    int a;
    double b;
    char c[N];
};

int main(void)
{
    int n,m,i,k;
    char d[N];
    struct Data data[M];
    int find[M];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf(" %s",&d);
        if(strcmp(d,"INT")==0)
        {
            scanf("%d",&data[i].a);
            find[i]=1;
        }
        else if(strcmp(d,"DOUBLE")==0)
        {
            scanf("%lf",&data[i].b);
            find[i]=2;
        }
        else if(strcmp(d,"STRING")==0)
        {
            scanf(" %s",data[i].c);
            find[i]=3;
        }
    }
    while(m--)
    {
        scanf("%d",&k);
        if(find[k]==1)
        {
            printf("%d\n",data[k].a);
        }
        else if(find[k]==2)
        {
            printf("%.2lf",data[k].b);
        }
        else if(find[k]==3)
        {
            printf("%s",data[k].c);
        }
    }
    return 0;
}
