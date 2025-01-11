#include<stdio.h>
int main(void)
{
    int n=7,i,j;
    for(i=1;i<=n;i++)
    {
        if(i<=4)
        {
            for(j=1;j<=4-i;j++)
            {
                printf(" ");
            }
            for(j=1;j<=2*i-1;j++)
            {
                printf("*");
            }
        }
        else
        {
            for(j=1;j<=i-4;j++)
            {
                printf(" ");
            }
            for(j=1;j<=15-2*i;j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
