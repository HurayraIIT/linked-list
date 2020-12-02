#include <iostream>

#include "Linked_List.h"
#include "Linked_List_UI.h"

#include "Stack_With_Linked_List.h"
#include "Queue_With_Linked_List.h"

#include "Queue_With_Stacks.h"
#include "Stack_With_Queues.h"

#include "Circular_Linked_List.h"


int main()
{
/*  LinkedList list;
    OperateLinkedList(&list); */

    // LinkedList list;
    // std::cout << list.isEmpty() << std::endl;
    // list.InsertAtTheEnd(4);
    // std::cout << list.isEmpty() << std::endl;

    StackWithQueues stack;
    stack.PrintStack();

    stack.Push(3);
    stack.Push(4);
    stack.Push(5);
    stack.Push(6);

    stack.PrintStack();

    stack.Pop();
    stack.Pop();

    stack.PrintStack();







    // QueueWithLinkedList q;
    // q.PrintQueue();

    // q.Enqueue(1);
    // q.Enqueue(2);
    // q.Enqueue(3);
    // q.Enqueue(4);

    // q.PrintQueue();

    // std::cout << "front: " << q.frontElement() << std::endl;

    // q.Dequeue();
    // std::cout << "front: " << q.frontElement() << std::endl;
    // q.Dequeue();
    // std::cout << "front: " << q.frontElement() << std::endl;

    // q.PrintQueue();


    return 0;
}