#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int main(void)
{
    int n,m;
    struct Node *head=NULL,*pr=head,*p=NULL;
    scanf("%d",&n);
    m=n;
    while(m--)
    {
        struct Node *p=NULL;
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
    }

    while(n--)
    {
        p=head;
        m=n;
        while(m--)
        {
            p=p->next;
        }
        printf("%d ",p->data);
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
