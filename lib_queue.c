#include <stdio.h>
#include<stdlib.h>
struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *ptr)
{
    printf("Elements in the queue \n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
void enqueue()
{
    int val;
    printf("Enter the value \n");
    scanf("%d", &val);
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
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
    struct Node *ptr = f;
    if (f == NULL)
    {
        printf("The queue is Empty");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
}