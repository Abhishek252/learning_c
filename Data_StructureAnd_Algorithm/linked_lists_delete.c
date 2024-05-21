#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linkedlistsTraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;

    }
}

struct Node * deleteFirst(struct Node *head)
{
    struct Node *ptr = head;

    head = head->next;
    free(head);
    return head;
}
int main()
{
    struct Node *head , *second, *third, *four;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    four = (struct Node*)malloc(sizeof(struct Node));
    head = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 23;
    second->next = third;
     
    third ->data = 12;
    third->next = four;

    four->data = 90;
    four->next = NULL;

    linkedlistsTraversal(head);

    head = deleteFirst(head);
   linkedlistsTraversal(head);


    return 0;
    
}