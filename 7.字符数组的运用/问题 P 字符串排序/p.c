#include<stdio.h>
#include<string.h>
#define N 100
#define M 3
int main(void)
{
    int i,j,k;
    char str[M][N],temp[N];
    for(i=0;i<M;i++)
        {
            scanf("%s",str+i);
            getchar();
        }
    for(i=0;i<M-1;i++)
    {
        k=i;
        for(j=i+1;j<M;j++)
        {
            if(strcmp(str[k],str[j])>0)
                k=j;
        }
        if(k!=i)
        {
            strcpy(temp,str[k]);
            strcpy(str[k],str[i]);
            strcpy(str[i],temp);
        }
    }
    for(i=0;i<M;i++)
        printf("%s ",str[i]);
    return 0;
}
