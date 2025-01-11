#include<stdio.h>
int main()
{
    int t,t1,t2,h1,h2,m1,m2,s1,s2,a,b,c;
    scanf("%d:%d:%d\n",&h1,&m1,&s1);
    scanf("%d:%d:%d",&h2,&m2,&s2);
    t1=h1*3600+m1*60+s1;
    t2=h2*3600+m2*60+s2;
    if(t1<t2) t=t2-t1;
    else t=t1-t2;
    a=t/3600;
    b=t/60%60;
    c=t%60;
    printf("%02d:%02d:%02d",a,b,c);
    return 0;
}
