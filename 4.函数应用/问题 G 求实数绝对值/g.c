#include<stdio.h>
#include<math.h>

int main(void)
{
    float x;
    while(scanf("%f",&x)!=EOF)
    {
        printf("%.2f\n",fabs(x));
    }
    return 0;
}

