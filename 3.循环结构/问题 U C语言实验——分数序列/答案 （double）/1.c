#include <stdio.h>
int main(int argc, char const *argv[])
{
    double a=1,b=2; //a为分母，b为分子
    int n;
    int i;
    double s=0;         //和
    double temp;
    scanf("%d",&n);       //输入
    for (i=1;i<=n;i++)            //循环求和
    {
        s=b/a+s;          //求和
        temp=a;         //把a原来的数值保存下来
        a=b;                     //求第二个数的a
        b=b+temp;           //求第二个数的b

    }
    printf("%lf\n",s);          //输出
    return 0;
}
