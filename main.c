#include "lib_dsa.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // QUEUE DONE

<<<<<<< HEAD
    // enqueue(1);
    // enqueue(2);
    // enqueue(3);
    // dequeue();
    // displayQueue();
=======
    Queue * front;
    front = CreateQueue(5);
    enqueue(front,15);
    enqueue(front,20);
    enqueue(front,235);
    front = dequeue(front);
    displayQueue(front);

    Queue * second;
    second = CreateQueue(10);
    enqueue(second,98);
    enqueue(second,78);
    enqueue(second,63);
    second = dequeue(second);
    displayQueue(second);
>>>>>>> 30c91df5f75b0c7d8c3e165b903499976f718b3d

    // STACK DONE

    // push(1);
    // push(2);
    // push(3);
    // pop();
    // displayStack();

    // // LinkdedList

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