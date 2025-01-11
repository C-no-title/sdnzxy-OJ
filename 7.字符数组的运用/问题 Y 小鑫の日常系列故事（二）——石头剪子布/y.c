#include<stdio.h>
#include<string.h>
#define N 50
int main(void)
{
    char str[3][N]={"Rock","Scissors","Cloth"},a[N],b[N];
    int x,y,z,i;
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;i<3;i++)
    {
        if(strcmp(str[i],a)==0)
        {
            x=i;
        }
        if(strcmp(str[i],b)==0)
        {
            y=i;
        }
    }
    z=x-y;
    if(z==-1||z==2)
    {
        printf("Win");
    }
    else if(z==1||z==-2)
    {
        printf("Lose");
    }
    else if(z==0)
    {
        printf("Equal");
    }
    return 0;
}
