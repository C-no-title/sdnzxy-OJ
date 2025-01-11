#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char name[6];
    int num;
    struct node*next;
};
struct node*create(int n)
{
    struct node*head,*tail,*p;
    head=(struct node*)malloc(sizeof(struct node));
    head->next=NULL;
    tail=head;
    int i;
    for(i=1; i<=n; i++)
    {
        p=(struct node*)malloc(sizeof(struct node));
        scanf("%s %d",p->name,&p->num);
        p->next=NULL;
        tail->next=p;
        tail=p;
    }
    return head;
}
struct node*merge(struct node*head1,struct node*head2)
{
    struct node*p1,*p2,*tail;
    p1=head1->next;
    p2=head2->next;
    tail=head1;
    free(head2);
    while(p1&&p2)
    {
        if(p1->num>p2->num)
        {
            tail->next=p1;
            tail=p1;
            p1=p1->next;
        }
        else if(p1->num<p2->num)
        {
            tail->next=p2;
            tail=p2;
            p2=p2->next;
        }
        else
        {
            if(strcmp(p1->name,p2->name)<0)
            {
                tail->next=p1;
                tail=p1;
                p1=p1->next;
            }
            else if(strcmp(p1->name,p2->name)>0)
            {
                tail->next=p2;
                tail=p2;
                p2=p2->next;
            }
        }

    }
    if(p1)
    {
        tail->next=p1;
    }
    else
    {
        tail->next=p2;
    }
    return head1;
}//这个就是链表的排序之后合并
int main()
{
    int n,m;
    scanf("%d %d",&m,&n);
    struct node*head1,*head2,*p;
    scanf("%d",&n);
    head1=create(n);
    int i;
    for(i=2; i<=m; i++)
    {
        scanf("%d",&n);
        head2=create(n);
        head1=merge(head1,head2);//之前先建立一个链表，然后在输入，比较1和2，然后更新1，输入新的2，再进行比较
    }
    p=head1->next;
    while(p)
    {
        if(p==head1->next)
        {
            printf("%s",p->name);
        }
        else
        {
            printf(" %s",p->name);

        }
        p=p->next;
    }
    printf("\n");
    return 0;
}
