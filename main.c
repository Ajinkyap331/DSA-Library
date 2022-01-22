#include "lib_dsa.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
    // QUEUE DONE

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

    // STACK DONE

    // push(1);
    // push(2);
    // push(3);
    // pop();
    // displayStack();

    // // LinkdedList

    //
     int *ptr=createllnode(5);
     displayll();

    
    



    return 0;
}