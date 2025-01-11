#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int main(void)
{
    int n=0,m,flag=1;
    struct Node *head=NULL,*pr=head,*p=NULL;
    struct Node *head1=NULL,*pr1=head,*p1=NULL;

    while(flag)
    {
        p=NULL;
        p=(struct Node*)malloc(sizeof(struct Node));
        if(head==NULL)
        {
            head=p;
        }
        else
        {
            pr->next=p;
        }
        p->next=NULL;
        scanf("%d",&p->data);
        pr=p;
        n++;
        if(pr->data==-1)
            flag=0;
    }
    p=head;
    while(p->next->data!=-1)
    {
        p=p->next;
    }
    p->next=NULL;
    n--;

    while(n--)
    {
        p=head;
        m=n;
        while(m--)
        {
            p=p->next;
        }

        p1=NULL;
        p1=(struct Node*)malloc(sizeof(struct Node));
        if(head1==NULL)
        {
            head1=p1;
        }
        else
        {
            pr1->next=p1;
        }
        p1->next=NULL;
        p1->data=p->data;
        pr1=p1;

    }

    p1=head1;
    while(p1!=NULL)
    {
        printf("%d ",p1->data);
        p1=p1->next;
    }

    p1=head1->next;
    pr1=head1;
    p=head->next;
    pr=head;
    while(p!=NULL)
    {
        free(pr);
        free(pr1);
        pr=p;
        pr1=p1;
        p=p->next;
        p1=p1->next;
    }
    free(pr);
    free(pr1);
    return 0;
}
