#include<stdio.h>
#define M 1000
#define N 30000
typedef struct stud
{
    int num;
}STU;

int main(void)
{
    STU stu[M];
    int i,n,m,max,j;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        stu[i].num=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        stu[j-1].num++;
    }
    max=stu[0].num,j=0;
    for(i=1;i<m;i++)
    {
        if(max<stu[i].num)
        {
            max=stu[i].num;
            j=i;
        }
    }
    printf("%d\n%d",j+1,max);
    return 0;
}
