#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    char ch;
    struct Node*next;
};

char linkedlistsTraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n", ptr->ch);
        ptr= ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *four;

    head= (struct Node*)malloc(sizeof(struct Node));
    second= (struct Node*)malloc(sizeof(struct Node));
    third= (struct Node*)malloc(sizeof(struct Node));
    four= (struct Node*)malloc(sizeof(struct Node));

    head->ch= 'M';
    head->next = second;

    second->ch = 'R';
    second->next =  third;

    third->ch = 'A';
    third->next = four;

    four->ch = 'L';
    four->next= NULL;

    linkedlistsTraversal(head);
    return 0;




    
}