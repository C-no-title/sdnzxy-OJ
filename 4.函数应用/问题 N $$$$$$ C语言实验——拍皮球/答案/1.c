#include <stdio.h>

int main()
{
    int t,n;
    double h,f;
    scanf("%d",&t);
    while (t--){
        scanf("%lf%d",&h,&n);
        f=h;
        while (--n){   //ע��--n��ǰ��t--������
            f+=h;
            h/=2;
        }
        printf("%.2f %.2f\n",f,h/2);
    }
}
