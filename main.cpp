#include <iostream>
#include "Linked_List.h"
#include "Linked_List_UI.h"
#include "Circular_Linked_List.h"
#include "Queue_With_Stacks.h"


int main()
{
/*  LinkedList list;
    OperateLinkedList(&list); */

    // LinkedList list;
    // std::cout << list.isEmpty() << std::endl;
    // list.InsertAtTheEnd(4);
    // std::cout << list.isEmpty() << std::endl;

    QueueWithStacks queue;
    queue.PrintQueue();

    queue.Enqueue(1);
    queue.Enqueue(2);
    queue.Enqueue(3);
    queue.Enqueue(4);
    
    queue.PrintQueue();

    queue.Dequeue();
    queue.Dequeue();
    
    queue.PrintQueue();

    return 0;
}