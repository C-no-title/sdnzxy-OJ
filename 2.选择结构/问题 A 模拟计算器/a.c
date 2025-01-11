#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a,i=0;
    scanf("%d",&a);
    while (i<a)
    {
        int x,y;
        char a;
        scanf("%d%*c%d",&x,&y);
        scanf(" %c",&a);
        if (a=='/'&&y==0)
        {
        printf("³ö´í£¡");
        exit(0);
        }
        switch (a)
        {
        case '+':
            printf("%d\n",x+y);
            break;
        case '-':
            printf("%d\n",x-y);
            break;
        case '*':
            printf("%d\n",x*y);
            break;
        case '/':
            printf("%d\n",x/y);
            break;
        }
        i++;
    }
    return 0;
}
