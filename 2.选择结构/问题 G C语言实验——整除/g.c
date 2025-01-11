#include<stdio.h>
int main(void)
{
    int x;
    scanf("%d",&x);
    if (x%3==0&&x%5==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
