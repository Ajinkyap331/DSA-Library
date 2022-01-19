#include <stdio.h>
#include <stdlib.h>

struct LinkedlistNode
{
    int data;
    struct LinkedlistNode *next;
};

struct LinkedlistNode *head = NULL;

void displayLinkedlist()
{   

    struct LinkedlistNode *head;
    struct LinkedlistNode *temp = head;
    if (head == NULL)
    {
        printf("List is empty");
        return;
    }
    printf("[ ");
    while (temp != NULL)
    {
        printf("%d-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL ]\n");
}
// Case 1
int is_empty()
{
    if (head == NULL)
    {
        printf("the list is empty\n");
        return 1;
    }
    else
    {
        return 0;
    }
}
void insertAtFirstLinkedlist(int data)
{
    if (is_empty())
    {
        head->data = data;
        head->next = NULL;
    }
    else
    {
        struct LinkedlistNode *ptr = (struct LinkedlistNode *)malloc(sizeof(struct LinkedlistNode));
        ptr->data = data;
        ptr->next = head;
        head = ptr;
    }
}
// Case 2
void insertAtIndexLinkedlist(int data, int index)
{
    struct LinkedlistNode *ptr = (struct LinkedlistNode *)malloc(sizeof(struct LinkedlistNode));
    struct LinkedlistNode *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
}
// Case 3
void insertAtEndLinkedlist(int data)
{

    struct LinkedlistNode *ptr = (struct LinkedlistNode *)malloc(sizeof(struct LinkedlistNode));
    ptr->data = data;
    struct LinkedlistNode *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
}

// Deleting first LinkedlistNode from the linked list
void deleteAtfirstLinkedlist()
{
    struct LinkedlistNode *ptr = head;
    head = head->next;
    // Make as president
    free(ptr);
}

// Deleting a LinkedlistNode at particular index
void deleteAtIndexLinkedlist(int index)
{
    struct LinkedlistNode *p = head;
    struct LinkedlistNode *q = head->next;
    // The q pointer should be present at the LinkedlistNode which has to be deleted
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
}
// Deleting a LinkedlistNode at last
void deletelastLinkedlist()
{
    struct LinkedlistNode *p = head;
    struct LinkedlistNode *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    // Make as secretary
    p->next = NULL;
    free(q);
}
// Deleting a LinkedlistNode having a given value
void deleteLinkedlistNode(int value)
{
    struct LinkedlistNode *p = head;
    struct LinkedlistNode *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
}
