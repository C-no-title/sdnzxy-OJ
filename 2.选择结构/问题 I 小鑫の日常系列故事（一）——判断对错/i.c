#include<stdio.h>
int main(void)
{
    int x,y,z;
    scanf("%d%*c%d",&x,&y);
    scanf("%d",&z);
    if (x+y==z)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
