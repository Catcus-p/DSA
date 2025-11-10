#include <stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node*next; 
};
void insertAtBegin(struct node**head, int new_data)
{
   struct node*new_node=(struct node*)malloc(sizeof(struct node));
   new_node->data=new_data;
   new_node->next=(*head);
   (*head)=new_node;
}
void diplaylist(struct node*node)
{
   while (node!=NULL)
   {
       printf(" %d ",node->data);
       node=node->next;
   }
   printf("null\n");
}
int main(){
    struct node*head=Null;
    
      insertAtBegin(&head,20);
      insertAtBegin(&head,10);
      insertAtBegin(&head, 30); /* data */
    diplaylist(head);
    return 0;
    
}