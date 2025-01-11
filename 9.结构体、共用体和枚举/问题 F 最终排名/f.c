#include<stdio.h>
#define N 10000
#define M 100
struct message
{
    long id;
    int num;
};

int main(void)
{
    int t,n,i,k,j;
    struct message a[N];
    struct message *b[N],*temp=NULL;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%ld%d",&a[i].id,&a[i].num);
            b[i]=&a[i];
        }


        for(i=0;i<n-1;i++)
        {
           k=i;
           for(j=i+1;j<n;j++)
           {
               if(b[k]->num<b[j]->num)
               {
                   k=j;
               }
           }

           if(k!=i)
           {
               temp=b[k];
               b[k]=b[i];
               b[i]=temp;
           }
           for(j=i+1;j<k;j++)
           {
               if(b[j]->num==b[k]->num)
               {
                   temp=b[k];
                   b[k]=b[j];
                   b[j]=temp;
               }
           }
        }

        for(i=0;i<n;i++)
        {
            printf("%ld %d\n",b[i]->id,b[i]->num);
        }
    }
    return 0;
}
