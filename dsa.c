#include<stdio.h>
#includ<stdlib.h>
struct Data
{
    int data;
    struct Node *next;

};

int main()
{
    struct Node *head, *n2,*n3, *n4, *n5;

    head = (struct Node*) malloc(sizeof(struct Node));
    n2  = (struct Node*) malloc(sizeof(struct Node));
    n3  = (struct Node*)malloc(sizeof(struct Node));
    n4 = (struct Node*)malloc(sizeof(struct Node));
    n5 = (struct Node*)malloc(sizeof(struct Node));

    *head ->data=200;
    *n2->data = 26;
    *n3->data = 100;
    *n4->data = 56;
    *n5->data= NULL;

}
