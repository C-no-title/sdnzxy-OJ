#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 10000000

struct Data
{
    char music[6];
    int score;
    struct Data *next;
};

int main(void)
{
    int x,y,max;
    struct Data *head=NULL,*pr=head,*p=NULL,*pt=head,*pm=head,*pt1=NULL,*pk=NULL;
    scanf("%d",&x);
    while(x--)
    {
        scanf("%d",&y);
        while(y--)
        {
            struct Data *p=NULL;

            p=(struct Data*)malloc(sizeof(struct Data));
            if(head==NULL)
                head=p;
            else
            {
                pr->next=p;
            }
            scanf(" %s",p->music);
            scanf("%d",&p->score);
            pr=p;
            pr->next=NULL;
        }
    }

    pr=head;
    while(pr->next!=NULL)
    {
        max=pr->score;
        p=pr->next;
        pm=head;
        pt=head;
        while(p!=NULL)
        {
            if(max<p->score)
            {
                max=p->score;
            }
            p=p->next;
        }
        if(max!=pr->score)
        {
            p=pr->next;
            while(p->score!=max)
                {
                    p=p->next;
                }
            while(pt->next!=p)
                {
                    pt=pt->next;
                }
            pt->next=p->next;
            p->next=pr;
            if(pr==head)
            {
                head=p;
            }
            else
            {
                while(pm->next!=pr)
                    {
                        pm=pm->next;
                    }
                pm->next=p;
            }
        }
        else
        {
            pr=pr->next;
        }
    }

    pr=head;
    pt=head;
    while(pr!=NULL&&pr->next!=NULL)
    {
        p=pr->next;
        if(p!=NULL&&pr->score==p->score)
        {
            p=p->next;
            while(p!=NULL&&p->score==pr->score)
            {
                p=p->next;
            }
            pm=p;
            pt=pr;
            while(pr->next!=pm)
            {
                pk=pr;
                p=pr;
                while(p->next!=pm)
                {
                    if(strcmp(p->next->music,pk->music)<0)
                    {
                        pk=p->next;
                    }
                    p=p->next;
                }
                p=pr;
                if(pk!=pr)
                {
                    while(p->next!=pk)
                    {
                        p=p->next;
                    }
                    p->next=pk->next;
                    pk->next=pr;
                    if(pr==head)
                    {
                        head=pk;
                    }
                    else
                    {
                        pt->next=pk;
                    }
                    pt=pk;
                }
                else
                {
                    pt=pr;
                    pr=pr->next;
                }
            }
            pt=pr;
            pr=pm;
        }
        else
        {
            pt=pr;
            pr=pr->next;
        }
    }


    p=head;
    while(p!=NULL)
    {
        printf("%s ",p->music);
        p=p->next;
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
