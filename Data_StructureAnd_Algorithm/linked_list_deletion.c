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
        ptr= ptr->next;

    }
}


struct Node * deleteFirst(struct Node *head)
{
    struct Node*ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
int main()
{
    struct Node *head, *second, *third,*four;
    head = (struct Node *)malloc (sizeof(struct Node));
    second = (struct Node *)malloc (sizeof(struct Node));
    third = (struct Node *)malloc (sizeof(struct Node));
    four = (struct Node *)malloc (sizeof(struct Node));
    
    head ->data = 70;
    second->data = 80;
    third->data = 90;
    four->data= 100;

    head->next = second;
    second ->next = third;
    third->next = four;
    four->next = NULL;

    linkedlistsTraversal(head);
    head = deleteFirst(head);
    linkedlistsTravesal(head);
    return 0;
    
}