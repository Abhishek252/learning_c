#include<stdio.h>
#include<stdlib.h>

struct Node
{
    float data ;
    struct Node *next;

};

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *four;
    struct Node *five;
    

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    four= (struct Node*)malloc(sizeof(struct Node));
    five = (struct Node*)malloc(sizeof(struct Node));
    

    head->data = 34.56;
    head->next = second;

    second->data= 35.56;
    second->next = third;

    third->data = 56.89;
    third->next = four;

    four->data = 45.67;
    four->next = five;

    five->data= 33.44;
    five->next = NULL;
   
   struct Node *val = head;
   while(val!=NULL)
   {
    printf("%.2f\n", val->data);
    val = val->next;
   }
    return 0;
}