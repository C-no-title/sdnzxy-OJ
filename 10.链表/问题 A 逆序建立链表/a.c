#include<stdio.h>
#include<stdlib.h>
struct link
{
    int digit;
    struct link *next;
};

int main(void)
{
    int i,j,n,digit;
    struct link *head=NULL,*p,*pr=NULL;
    scanf("%d",&n);
    j=n;
    while(j--)
    {
        p=NULL,pr=head;
        p=(struct link*)malloc(sizeof(struct link));
        if(head==NULL)
            head=p;
        else
        {
            while(pr->next!=NULL)
                pr=pr->next;
            pr->next=p;
        }
        scanf("%d",&digit);
        p->digit=digit;
        p->next=NULL;
    }

    j=n;
    while(j--)
    {
        pr=head;
        for(i=0;i<j;i++)
            pr=pr->next;
        printf("%d ",pr->digit);
    }
    p=head,pr=NULL;
    while(p!=NULL)
    {
        pr=p;
        p=p->next;
        free(pr);
    }
    return 0;
}
