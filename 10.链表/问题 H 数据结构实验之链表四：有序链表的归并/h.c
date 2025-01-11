#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node* BuildNode(struct node *head,int n);
int main(void)
{
    int m,n;
    struct node *head1=NULL;
    struct node *head2=NULL;
    struct node *pr=NULL,*p=NULL,*pk=NULL,*pt=NULL;

    scanf("%d%d",&m,&n);
    head1=BuildNode(head1,m);
    head2=BuildNode(head2,n);

    p=head1;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=head2;

    pr=head1;
    pt=head1;
    while(pr->next!=NULL)
    {
        pk=pr;
        p=pr->next;
        while(p!=NULL)
        {
            if(p->data<pk->data)
            {
                pk=p;
            }
            p=p->next;
        }

        if(pk!=pr)
        {
            p=pr;
            while(p->next!=pk)
            {
                p=p->next;
            }
            p->next=pk->next;
            pk->next=pr;
            if(pr==head1)
            {
                head1=pk;
            }
            else
            {
                pt->next=pk;
                pt=pk;
            }
        }
        else
        {
            pt=pr;
            pr=pr->next;
        }
    }


    pr=head1;
    p=head1;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
        free(pr);
        pr=p;
    }
    return 0;
}

struct node* BuildNode(struct node *head,int n)
{
    struct node *pr=head;
    while(n--)
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
        scanf("%d",&p->data);
        p->next=NULL;
        pr=p;
    }
    return head;
}
