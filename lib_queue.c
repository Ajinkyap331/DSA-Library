#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int data;
    struct queue *next;
};

struct queue *f = NULL;
struct queue *r = NULL;

void displayQueue()
{
    struct queue *ptr = f;
    printf("Elements in the queue \n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int isQueueEmpty()
{
    if (f == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isQueueFull()
{
    struct queue *n = (struct queue *)malloc(sizeof(struct queue));
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(int val)
{
    struct queue *n = (struct queue *)malloc(sizeof(struct queue));
    if (n == NULL)
    {
        printf("The queue is full");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}
void dequeue()
{
    int val;
    struct queue *ptr = f;
    if (f == NULL)
    {
        printf("The queue is Empty \n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
}