#include<stdio.h>
#define N 30
#define M 7
typedef struct student
{
    float score[M];
    char name[N];
}STU;
int main(void)
{
    STU stu;
    int n,i,j;
    float max,min,sum;
    while(scanf("%f",&stu.score[0])!=EOF)
    {
        sum=stu.score[0];
        max=stu.score[0];
        min=stu.score[0];
        for(i=1;i<M;i++)
        {
            scanf("%f",&stu.score[i]);
            sum+=stu.score[i];
            if(max<stu.score[i])
                max=stu.score[i];
            if(min>stu.score[i])
                min=stu.score[i];
        }
        scanf(" %s",&stu.name);
        printf("%s %.2f\n",stu.name,(sum-max-min)/(M-2));
    }
    return 0;
}

