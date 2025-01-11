#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a1,b1,c1,a2,b2,c2,x1,y1,z1,x2,y2,z2,x3,y3,z3;
    scanf("%d%*c%d%*c%d",&a1,&b1,&c1);
    scanf("%d%*c%d%*c%d",&a2,&b2,&c2);


    if(a1>24||a1<0||a2>24||a2<0||b1>60||b1<0||b2>60||b2<0||c1>60||c1<0||c2>60||c2<0)
    {
        printf("出错！");
        exit (0);
    }


    if(a2>=a1)
    {
        x2=a2;
        x1=a1;
        y2=b2;
        y1=b1;
        z2=c2;
        z1=c1;
    }
    else
    {
        x2=a1;
        x1=a2;
        y2=b1;
        y1=b2;
        z2=c1;
        z1=c2;
    }


    if(x2>=x1&&y2>=y1&&z2>=z1)
      {
          x3=x2-x1;
          y3=y2-y1;
          z3=z2-z1;
      }
    if(x2>=x1&&y2>y1&&z2<z1)
    {
        z3=60+(z2-z1);
        y3=y2-y1-1;
        x3=x2-x1;
    }
    if(x2>x1&&y2<y1&&z2>=z1)
    {
        z3=z2-z1;
        y3=60+(y2-y1);
        x3=x2-x1-1;
    }
    if(x2>x1&&y2<y1&&z2<z1)
    {
        z3=60+(z2-z1);
        y3=60+(y2-y1)-1;
        x3=x2-x1-1;
    }

    printf("%02d:%02d:%02d\n",x3,y3,z3);
    return 0;
}
