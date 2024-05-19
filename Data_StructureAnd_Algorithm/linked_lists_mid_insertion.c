#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
};

void linkedListsTraversal(struct Node * ptr)
{
    while(ptr!=NULL)
    {
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct  Node * insertAtindex(struct Node * head, int data, int index)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head;
     int i=0;
    while(i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr -> data =data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

int main()

{
   struct Node *head , *s1, *s2, *s3, *s4;

   head = (struct Node*)malloc(sizeof(struct Node));
   s1 = (struct Node*)malloc(sizeof(struct Node));
   s2= (struct Node*)malloc(sizeof(struct Node));
   s3= (struct Node*)malloc(sizeof(struct Node));
   s4 = (struct Node*)malloc(sizeof(struct Node));

   head -> data = 100;
   s1 -> data = 200;
   s2 -> data = 300;
   s3 -> data = 400;
   s4 -> data = 500;

   head->next = s1;
   s1->next=s2;
   s2->next = s3;
   s3-> next = s4;
   s4-> next = NULL;

   linkedListsTraversal(head);

   head = insertAtindex(head, 999, 1);

   printf("Linked lists after insertion\n:");

  linkedListsTraversal(head);


   return 0;
   
   
}