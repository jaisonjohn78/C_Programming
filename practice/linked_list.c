#include<stdio.h>
#include<conio.h>
    struct node{
        int item;
        struct node *next;
    };
    int number_of_node=0;
int main()
{
    struct node *start=NULL;
    int data;
    int n;
    int x;
    while(1)
    {
        x=choice();
        switch(x)
        {
            case 1:{
                printf("Enter a number to insert at last node:");
                scanf("%d",&data);
                insert(data,&start);
                break;
            }
            case 2:{
                printf("Enter the number to insert at Nth node:");
                scanf("%d",&data);
                printf("Enter the Nth node:");
                scanf("%d",&n);
                insert_at_n(data,n,&start);
                break;
            }
            case 3:{
               deletes(&start);
               break;
            }
            case 4:{
                showall(&start);
                break;
            }
            default:{
               printf("Invalid Choice");
            }
        }
        getch();
    }



    return 0;
}
int choice()
{
    system("cls");
    int x;
    printf("1.Insert data in linkedlist\n\n");
    printf("2.Insert a node at Nth node\n\n");
    printf("3.Delete a node from last\n\n");
    printf("4.Show all the values inserted\n\n");
    scanf("%d",&x);
    return x;
}
void insert(int data,struct node **start)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    n->next=NULL;
    if(*start==NULL)
    {
        *start=n;
    }else
    {
        struct node *t;
        t=*start;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=n;
    }
    number_of_node++;
}
void insert_at_n(int data,int n,struct node **start)
{
    if(n>number_of_node)
    {
        printf("You can not insert at this node.");
    }else
    {
        struct node *t;
        t=*start;
        struct node *pre_t=*start;
        while(n-1)
        {
            pre_t=t;
            t=t->next;
            --n;
        }
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->item=data;
    if(pre_t==t)
    {
        n->next=*start;
        *start=n;
    }else
    {
    n->next=pre_t->next;
    pre_t->next=n;
    }

}
}


void showall(struct node**start)
{
    struct node *t;
    t=*start;
    if(t!=NULL)
    {
       while(t->next!=NULL)
       {
           printf("%d ",t->item);
           t=t->next;
       }
       printf("%d",t->item);
    }
}
void deletes(struct node **start)
{
   if(*start==NULL)
   {
       printf("You have nothing to delete");
   }else
   {
       struct node *t,*pre;
       t=*start;
       while(t->next!=NULL)
       {
           pre=t;
           t=t->next;
       }
        if((t->next)==(*start)->next)
        {
       free(*start);
       *start=NULL;
        }else
        {
            free(t);
            pre->next=NULL;

        }
   }

}