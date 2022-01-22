#include <stdio.h>
#include <stdlib.h>

struct LinkedlistNode
{
    int data;
    struct LinkedlistNode *next;
}*stnode;


struct LinkedlistNode *head = NULL;
void createllnode(int num)
{
    struct LinkedlistNode *fnNode, *tmp;
    stnode = (struct LinkedlistNode *)malloc(sizeof(struct LinkedlistNode));

    if(stnode == NULL) //check whether the fnnode is NULL and if so no memory allocation
    {
       return ;
    }
    else
    {
// reads data for the node through keyboard
        stnode->data = num;      
        stnode->next = NULL; // links the address field to NULL
        tmp = stnode;

    }
}

// Case 1
int is_empty()
{
    if (stnode == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void insertAtHeadll(int data)
{
    if (is_empty())
    {
        stnode->data = data;
        stnode->next = NULL;
    }
    else
    {
        struct LinkedlistNode *ptr = (struct LinkedlistNode *)malloc(sizeof(struct LinkedlistNode));
        ptr->data = data;
        ptr->next = stnode;
        stnode = ptr;
    }
}
// Case 2
void insertAtIndexll(int data, int index)//
{
    struct LinkedlistNode *p;
    p=stnode;
    struct LinkedlistNode *ptr = (struct LinkedlistNode *)malloc(sizeof(struct LinkedlistNode));
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
void insertAtEndll(int data)//
{

    struct LinkedlistNode *ptr = (struct LinkedlistNode *)malloc(sizeof(struct LinkedlistNode));
    ptr->data = data;
    struct LinkedlistNode *p = stnode;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
   
}

// Deleting first LinkedlistNode from the linked list
void deleteAtHeadll()//
{
    struct LinkedlistNode *ptr = stnode;
    stnode = stnode->next;
    // Make as president
    free(ptr);
}

// Deleting a LinkedlistNode at particular index
void deleteAtIndexll(int index)//
{
    struct LinkedlistNode *p = stnode;
    struct LinkedlistNode *q =stnode->next;
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
void deleteAtlastll()//
{
    struct LinkedlistNode *p = stnode;
    struct LinkedlistNode *q = stnode->next;
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
void deleteAtvaluell(int value)//
{
    struct LinkedlistNode *p = stnode;
    struct LinkedlistNode *q = stnode->next;
    if(stnode->data==value){
        deleteAtHeadll();
        return;
    }
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
void displayll()
{   
    struct LinkedlistNode *temp ;
    if (stnode== NULL)
    {
        printf("List is empty");
        return;
    }
    else{
        temp =stnode;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    }
}