#include<stdio.h>
#include<stdlib.h>
struct Node{

    int data;
    struct Node *next;
};

void linkedlistsTraversal(struct  Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->next;
}   }
struct Node *deleteFirst(struct Node *head, int data)
{
    struct Node *ptr = head;
    head = head->next;
    free(head);
    return head;

}

struct Node * deleteindex(struct Node *head , int index)
{
    struct Node *p= head;
    struct Node *q = head->next;
    for(int i = 0; i<index-1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p= p->next = q->next;
    free(q);
    return head;

}

struct Node *deleteLast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while(q-> next!= NULL)
    {
        p = p->next;
        q= q->next;

    }
    p->next = NULL;
    free(q);
    return head;
}

struct Node * deleteAtindex(struct Node *head , int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data != value && q->next != NULL)
    {
        p = p->next ;
        q = q->next;

    }
    if(q->data == value)
    {
        p->next = q->next;
        free(q);
        return head;
    }
}
int main()
{
    struct Node *head , *second, *third, *four;
    
    head = (struct Node*)malloc (sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc (sizeof(struct Node));
    four = (struct Node*)malloc (sizeof(struct Node));

    head->data = 50;
    second->data = 80;
    third->data = 90;
    four->data = 100;

    head->next = second;
    second->next = third;
    third->next = four;
    four->next = NULL;

    printf(" linked ltsts Before deletion\n");

    linkedlistsTraversal(head);
   // head = deleteFirst(head);
   //head = deleteindex(head, 2);
  // head = deleteLast(head);

   head = deleteAtindex(head, 2);
   printf("\n linked lists After deletion\n");

    linkedlistsTraversal(head);


    return 0;    


}

