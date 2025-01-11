#include<stdio.h>
#include<stdlib.h>
#define N 15
struct link
{
    int digit;
    struct link *next;
};
struct link* AppendNode(int n);
void DisplayNode(struct link *head,int n);
struct link* DeleteNode(struct link *head,int *n);

int main(void)
{
    int n;
    struct link *p=NULL,*head =NULL,*pr=NULL;
    scanf("%d",&n);

    head=AppendNode(n);
    printf("%d\n",n);
    DisplayNode(head,n);
    head=DeleteNode(head,&n);
    printf("\n%d\n",n);
    DisplayNode(head,n);

    p=head->next,pr=head;
    while(p==NULL)
    {
        free(pr);
        pr=p;
        p=p->next;
    }
    free(pr);
    return 0;
}


struct link* AppendNode(int n)
{
    struct link *p=NULL,*head =NULL,*pr=head;
    while(n--)
    {
        p=NULL;
        p=(struct link*)malloc(sizeof(struct link));
        p->next=NULL;
        if(head==NULL)
        {
            head=p;
        }
        else
        {
            pr->next=p;
        }
        scanf("%d",&p->digit);
        pr=p;
    }
    return head;
}

void DisplayNode(struct link *head,int n)
{
    struct link *p;
    int i;
    while(n--)
    {
        i=n;
        p=head;
        while(i--)
        {
            p=p->next;
        }
        printf("%d ",p->digit);
    }
}

struct link* DeleteNode(struct link *head,int *n)
{
    struct link *p=head->next;
    int m=*n;
    while(p->next!=NULL)
        p=p->next;
    while(m--)
    {
        struct link *pr=head;
        while(pr->next!=p&&pr!=p)
        {
            if(head->digit==p->digit)
            {
                head=head->next;
                pr=head;
                m--;
                (*n)--;
                continue;
            }
            else if(pr->next->digit==p->digit)
            {
                pr->next=pr->next->next;
                m--;
                (*n)--;
                continue;
            }
            pr=pr->next;
        }
        p=pr;
    }
    return head;
}
