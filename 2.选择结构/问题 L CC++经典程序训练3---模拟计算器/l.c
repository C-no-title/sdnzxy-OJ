#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int x,y;
    char a;
    scanf("%d%*c%d",&x,&y);
    scanf(" %c",&a);
    if (a=='/'&&y==0)
    {
        printf("³ö´í!");
        exit(0);
    }
    switch (a)
    {
    case '+':
        printf("%d",x+y);
        break;
    case '-':
        printf("%d",x-y);
        break;
    case '*':
        printf("%d",x*y);
        break;
    case '/':
        printf("%d",x/y);
        break;
    }
    return 0;
}
