#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *last;
    int data;
    struct node *next;
};

int main(void)
{
    int n,m,x;
    struct node *head=NULL,*pr=head,*p=NULL;
    scanf("%d%d",&n,&m);

    while(n--)
    {
        struct node *p=NULL;
        p=(struct node*)malloc(sizeof(struct node));
        if(head==NULL)
        {
            head=p;
            head->last=NULL;
        }
        else
        {
            pr->next=p;
            p->last=pr;
        }
        scanf("%d",&p->data);
        p->next=NULL;
        pr=p;
    }

    while(m--)
    {
        p=head;
        scanf("%d",&x);
        while(p->data!=x)
        {
            p=p->next;
        }
        if(p->next!=NULL&&p->last!=NULL)
            printf("%d %d\n",p->last->data,p->next->data);
        else if(p->next==NULL)
            printf("%d\n",p->last->data);
        else if(p->last==NULL)
            printf("%d\n",p->next->data);
    }
    p=head->next;
    pr=head;
    while(p!=NULL)
    {
        free(pr);
        pr=p;
        p=p->next;
    }
    free(pr);
    return 0;
}
