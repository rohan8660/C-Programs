#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int i,n,item
    ;
    struct node *p,*q,*head;

    printf("ENTER THE NUMBER OF NODES");
    scanf("%d",&n);

    printf("ENTER THE VALUE OF HEAD NODE");
    scanf("%d",&item);

    q=(struct node *)malloc(sizeof(struct node));
    q->data=item;
    q->next= NULL;

    head=q;
    p=head;

    for(i=1;i<n;i++)
    {
        printf("ENTER THE VALUE OF THE NEXT NODE");
        scanf("%d",&item);

        q=(struct node *)malloc(sizeof(struct node));
        q->data=item;
        q->next= NULL;

        p->next=q;
        p=p->next;
    }
    /* tracing the linked list*/
    printf("\n");
    p=head;
    while(p!=NULL)
    {
        printf("\t %d",p->data);
        p=p->next;
    }
}
