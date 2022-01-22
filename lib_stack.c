#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void displayStack()
{
    struct Node *ptr = top;
    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
}

int isStackEmpty()
{
    if (top == NULL)
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

void push(int x)
{
    if (isStackFull())
        printf("Stack Overflow");
    else
    {
        struct Node *p = (struct Node *)malloc(sizeof(struct Node));
        p->data = x;
        p->next = top;
        top = p;
    }
}
void pop()
{
    if (isStackEmpty())
        printf("Stack Underflow");
    else
    {
        struct Node *p = top;
        top = (top)->next;
        int x = p->data;
        free(p);
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