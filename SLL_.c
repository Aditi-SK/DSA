#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node * add_end(struct node *);
struct node * add_begin(struct node *);
struct node * delete_end(struct node *);
struct node * delete_begin(struct node *);
struct node *delete_all(struct node *);
void display(struct node *);
struct node * add_node(struct node *,int);
struct node * getnode();
struct node * delete_node(struct node *,int);
int length(struct node *);

main()
{
    struct node *head=NULL;
    int ch,pos,count;
while(1)
    {
        printf("\nEnter 1:To add the node at the end\nEnter 2:To add the node at the beginning\nEnter 3:To delete the node at the end\nEnter 4:To delete the node at the beginning\nEnter 5:To display all the node\nEnter 6 to delete list\n7:add at pos\n8 to delete at pos\n9 to count\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : head=add_end(head);
                    display(head);
                     break;
            case 2 : head=add_begin(head);
                    display(head);
                    break;
             case 3: if(head==NULL)
                        printf("List is empty\n");
                    else
                        head=delete_end(head);
                    break;
            case 4: if(head==NULL)
                        printf("List is empty\n");
                    else
                        head=delete_begin(head);
                    break;
            case 5 : display(head);
                    break;
            case 6 : head=delete_all(head);
                    if(head==NULL)
                    {
                        printf("List deleted\n");
                    }
                    return 0;
                    break;
            case 7: printf("Enter the position\n");
                    scanf("%d",&pos);
                    head=add_node(head,pos);
                    display(head);
                    break;
            case 8: if(head==NULL)
                        printf("List is empty\n");
                    else
                    {
                        scanf("%d",&pos);
                        head=delete_node(head,pos);
                    }
                    display(head);
                    break;
           case 9: count=length(head);
                   printf("\nLength of the given list is %d",count);
                   break;

            default :break;

        }
    }
}
struct node * getnode()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
}

struct node * add_end(struct node *head)
{
    struct node *newnode,*current;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    current=head;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=newnode;
    return head;
}
void display(struct node *head)
{
    struct node *current;
    current=head;
    while(current!=NULL)
    {

        printf("%d->",current->data);
        current=current->next;
    }
}
struct node *add_begin(struct node *head)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data:\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->next=head;
    head=newnode;
    return head;
}
struct node * delete_end(struct node *head)
{
    struct node *pre=NULL,*current=head;
    while(current->next!=NULL)
    {
        pre=current;
        current=current->next;
    }
    if(pre!=NULL)
    {
        pre->next=NULL;
    }
    else
    {
        head=NULL;
    }
    printf("Deleted information is %d",current->data);
    free(current);
    return head;
}
struct node * delete_begin(struct node *head)
{
   struct node *current=head;
   head=head->next;
   printf("Deleted information is %d",current->data);
   free(current);
   return head;
}
struct node *delete_all(struct node *head)
{
    struct node *cur=head;
    while(cur!=NULL)
   {
        cur=cur->next;
        free(head);
        head=cur;
   }
   return head;
}
struct node * add_node(struct node *head,int pos)
{
     int i;
     struct node *current=head,*newnode;
     newnode=getnode();
     if(pos<=0 || head==NULL)
     {
         newnode->next=head;
         head=newnode;
         return head;
     }
      for(i=0;i<pos-1 && current->next!=NULL;i++)
      {
          current= current->next;
      }
      newnode->next=current->next;
      current->next=newnode;
      return head;
}
struct node * delete_node(struct node *head,int pos)
{
    int i;
    struct node *current=head,*pre=NULL;
    if(pos<=0 || head->next==NULL)
    {
        head=head->next;
        printf("Deleted information is %d",current->data);
        free(current);
        return head;
    }
    for(i=0;i<pos && current->next!=NULL;i++)
    {
        pre=current;
        current=current->next;
    }
    pre->next=current->next;
    printf("Deleted information is %d",current->data);
    free(current);
    return head;
}
int length(struct node *head)
{
    struct node *current=head;
    int c=0;
    while(current!=0)
    {
        c++;
        current=current->next;
    }
    return c;
}

















