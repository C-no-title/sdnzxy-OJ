#include<stdio.h>
double a[15],h,sum;//a[i]��ʾ��i��ײ�ص���߶�
int main()
{
    int n;
    scanf("%lf %d",&h,&n);
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        a[i]=h*1.0/2;
        else
        a[i]=a[i-1]*1.0/2;
    }
    for(int i=0;i<n;i++)//��n��ײ�ز��ᷴ����ֻ��ײ��֮ǰ
    {
        if(i==0)
        sum+=h;//�ʼֻ����ȥ
        else
        sum+=2*a[i];//ÿ�ζ�Ҫ����ȥ������������
    }
    printf("%.2f %.2f",sum,a[n]);
}
