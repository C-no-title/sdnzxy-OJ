#include <stdio.h>
int main(int argc, char const *argv[])
{
    double a=1,b=2; //aΪ��ĸ��bΪ����
    int n;
    int i;
    double s=0;         //��
    double temp;
    scanf("%d",&n);       //����
    for (i=1;i<=n;i++)            //ѭ�����
    {
        s=b/a+s;          //���
        temp=a;         //��aԭ������ֵ��������
        a=b;                     //��ڶ�������a
        b=b+temp;           //��ڶ�������b

    }
    printf("%lf\n",s);          //���
    return 0;
}
