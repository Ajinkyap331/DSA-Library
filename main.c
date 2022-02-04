#include "lib_dsa.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // QUEUE DONE

    // enqueue(1);
    // enqueue(2);
    // enqueue(3);
    // dequeue();
    // displayQueue();

    // STACK DONE

    // push(1);
    // push(2);
    // push(3);
    // pop();
    // displayStack();

    // LinkdedList

    //
    //  int *ptr=createllnode(5);
    //  displayll();

    struct Node *s = Stack();
    struct Node *s1 = Stack();  
    push(s, 1);
    displayStack(s);
    push(s1, 2);
    displayStack(s1);

    return 0;
}