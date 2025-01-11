#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main(void)
{
    int m,n,x=1;
    struct node *head=NULL,*pr=head,*p=NULL;
    scanf("%d%d",&n,&m);
    while(x<=n)
    {
        struct node *p=NULL;
        p=(struct node*)malloc(sizeof(struct node));
        if(head==NULL)
        {
            head=p;
        }
        else
        {
            pr->next=p;
        }
        p->next=NULL;
        p->data=x;
        pr=p;
        x++;
    }

    pr->next=head;

    if(m==1)
    {
        printf("%d",n);
    }
    else
    {
        pr=head;
        m=m-2;
        while(pr->next!=pr)
        {
            x=m;
            while(x--)
            {
                pr=pr->next;
            }
            p=pr->next;
            pr->next=pr->next->next;
            free(p);
            pr=pr->next;
        }
        printf("%d",pr->data);
    }
    return 0;
}
