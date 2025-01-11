#include <stdio.h>
#include <math.h>

int main()
{
    int i, n, j, a[5];
    scanf("%d", &n);
    for(i = 0; n > 0; i++)
    {
        a[i] = n % 10;
        n = n / 10;
    }
    printf("%d\n", i);
    for(j = i; j > 0; j--)
    {
        if(j == 1)
        {
            printf("%d", a[j - 1]);
        }
        else
        {
            printf("%d ", a[j - 1]);
        }
    }
    printf("\n");
    for(j = 0; j < i; j++)
    {
        if(j == i - 1)
        {
            printf("%d", a[j]);
        }
        else
        {
            printf("%d ", a[j]);
        }
    }
    printf("\n");
    return 0;
}


