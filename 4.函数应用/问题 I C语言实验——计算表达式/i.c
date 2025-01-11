#include<stdio.h>
#include<math.h>
float function(float x,int n);

int main(void)
{
    float x;
    int n;
    scanf("%f%*c%d",&x,&n);
    printf("%.2f",function(x,n));
    return 0;
}

float function(float x,int n)
{
    if(n==1)
    {
      return sqrt(1+x);
    }
    return sqrt(n+function(x,n-1));
}

















