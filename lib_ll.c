#include <stdio.h>
#include <stdlib.h>

struct LinkedlistNode
{
    int data;
    char name[10];
    char prn[10];
    int designation;
    struct LinkedlistNode *next;
};

struct LinkedlistNode *head = NULL;

void displayLinkedlist(struct LinkedlistNode *head)
{
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
struct LinkedlistNode *insertAtFirstLinkedlist(struct LinkedlistNode *head, int data)
{
    struct LinkedlistNode *ptr = (struct LinkedlistNode *)malloc(sizeof(struct LinkedlistNode));
    ptr->data = data;

    ptr->next = head;
    return ptr;
}
// Case 2
struct LinkedlistNode *insertAtIndexLinkedlist(struct LinkedlistNode *head, int data, int index)
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
    return head;
}
// Case 3
struct LinkedlistNode *insertAtEndLinkedlist(struct LinkedlistNode *head, int data)
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
    return head;
}
// Case 4
struct LinkedlistNode *insertAfterLinkedlistNodeLinkedlist(struct LinkedlistNode *head, struct LinkedlistNode *prevLinkedlistNode, int data)
{
    struct LinkedlistNode *ptr = (struct LinkedlistNode *)malloc(sizeof(struct LinkedlistNode));
    ptr->data = data;

    ptr->next = prevLinkedlistNode->next;
    prevLinkedlistNode->next = ptr;

    return head;
}
// Deleting first LinkedlistNode from the linked list
struct LinkedlistNode *deletefirstLinkedlist(struct LinkedlistNode *head)
{
    struct LinkedlistNode *ptr = head;
    head = head->next;
    // Make as president
    free(ptr);
    return head;
}
// Deleting a LinkedlistNode at particular index
struct LinkedlistNode *deleteAtIndexLinkedlist(struct LinkedlistNode *head, int index)
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
    return head;
}
// Deleting a LinkedlistNode at last
struct LinkedlistNode *deletelastLinkedlist(struct LinkedlistNode *head)
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
    return head;
}
// Deleting a LinkedlistNode having a given value
struct LinkedlistNode *deleteLinkedlistNode(struct LinkedlistNode *head, int value)
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
    return head;
}
