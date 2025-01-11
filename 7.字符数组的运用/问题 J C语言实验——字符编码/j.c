#include<stdio.h>
#define N 5

int main(void)
{
    char str[N+1];
    int i;
    fgets(str,N+1,stdin);
    for(i=0;i<N;i++)
    {
        str[i]=str[i]+4;
    }
    printf("password is %s",str);
    return 0;
}
