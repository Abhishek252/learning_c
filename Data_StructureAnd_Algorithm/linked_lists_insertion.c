#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;

};

void LinkedlistsTraversal(struct Node *ptr){
     while(ptr!=NULL)
     {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
     }
}

 struct Node * insertAtFirst (struct Node *head, int data)
 {
    struct Node *ptr = (struct Node*)malloc (sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;

    return ptr;
 }

int main()
{
    struct Node *head, *second, *third, * four, *five;

    head =  (struct Node*)malloc (sizeof(struct Node));
    second =  (struct Node*)malloc (sizeof(struct Node));
    third =  (struct Node*)malloc (sizeof(struct Node));
    four =  (struct Node*)malloc (sizeof(struct Node));
    five =  (struct Node*)malloc (sizeof(struct Node));
    
    head->data = 66;
    head->next = second;

    second->data = 67;
    second->next = third;

    third->data = 68;
    third->next = four;

    four->data = 69;
    four->next = five;

    five->data = 70;
    five->next = NULL;

    LinkedlistsTraversal(head);

    head = insertAtFirst(head, 60);
    LinkedlistsTraversal(head);

    return 0;



}