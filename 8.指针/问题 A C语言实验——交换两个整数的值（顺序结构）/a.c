#include<stdio.h>
void swap(int *px,int *py);

int main(void)
{
    int x,y;
    scanf("%d%*c%d",&x,&y);
    swap(&x,&y);
    printf("%d %d",x,y);
    return 0;
}

void swap(int *px,int *py)
{
    int temp;
    temp=*px;
    *px=*py;
    *py=temp;

}
