#include<stdio.h>
int main(void)
{
    int n,i,a=0,b=0,c=0,d=0,e=0,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        x=x>100||x<0?-1:x/10;
        switch (x)
        {
        case 10:
        case 9:
            a++;
            break;
        case 8:
            b++;
            break;
        case 7:
            c++;
            break;
        case 6:
            d++;
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            e++;
            break;
        default:
            printf("Input error!\n");
        }
    }
    printf("A %d\n",a);
    printf("B %d\n",b);
    printf("C %d\n",c);
    printf("D %d\n",d);
    printf("E %d\n",e);
    return 0;
}
