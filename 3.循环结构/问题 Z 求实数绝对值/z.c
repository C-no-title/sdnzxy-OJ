#include<stdio.h>
#include<math.h>

int main(void)
{
    float a;

    while(scanf("%f",&a)!=EOF)
    {
        printf("%.2f\n",fabs(a));
    }
    return 0;
}
