#include<stdio.h>
void process(int n,char a,char b,char c);
void move(int n,char a,char c);

int main(void)
{
  int n;
  scanf("%d",&n);
  process(n,'A','B','C');
  return 0;
}

void process(int n,char a,char b,char c)  //a为起始棒，b转接，c终点
{
    if(n==1)
        move(n,a,c);
    else
    {
        process(n-1,a,c,b);
        move(n,a,c);
        process(n-1,b,a,c);
    }
}

void move(int n,char a,char c)
{
    printf("Move disk %d from %c to %c\n",n,a,c);
}










