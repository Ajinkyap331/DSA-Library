#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Stack;

struct Node * CreateStack(int val){
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = val;
    n->next = NULL;
    return n;
}

void displayStack(Stack *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int isStackEmpty(Stack *p)
{
    if (p == NULL)
        return 1;
    else
        return 0;
}

int isStackFull()
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
        return 1;
    else
        return 0;
}

Stack *  push(Stack *p1, int x)
{
    if (isStackFull())
        printf("Stack Overflow");
    else
    {
        struct Node *p = (struct Node *)malloc(sizeof(struct Node));
        p->data = x;
        p->next = p1;
        p1 = p;
        return p1;
    }
}



Stack * pop(Stack *p1)
{
    if (isStackEmpty(p1))
        printf("Stack Underflow");
    else
    {
        struct Node *p = p1;
        p1 = p1->next;
        int x = p->data;
        free(p);
        return p1;
    }
}

int peek(struct Node *top, int pos)
{
    struct Node *ptr = top;
    for (int i = 0; (i < pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return 0;
    }
}