#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct queue *q)
{   

   if(q->r==q->f)
    {
        return 1;
    }
    else{
        return 0;
    }
}


int isFull(struct queue *q)
{   

   if(q->r==q->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct queue *q, int val)
{
    if(isFull(q))
    {
        printf("Queue is empty");
    }
    else{
        q->r++;
        q->arr[q->r]= val;
    }
}

void dequeue(struct queue *q){
int a = -1;

    if(isEmpty(q))
    {
        printf("Queue is empty");
    }
    else{
        q->f++;
       a= q->arr[q->r];
    }

}


int main()
{
    struct queue q;
    q.size = 10;
    q.f = q.r = -1;
    q.arr = (int *) malloc (q.size*sizeof(int) );


    // if(isEmpty(&q))
    // {
    //     printf("queue is empty");
    // }

    enqueue(&q, 12);
    enqueue(&q, 15);

   printf ("dequeuing element %d\n", dequeu(&q)); 
   printf ("dequeuing element %d\n", dequeu(&q)); 

     if(isFull(&q))
    {
        printf("queue is full");
    }

    if(isFull(&q))
    {
        printf("queue is full");
    }

    return 0;

}