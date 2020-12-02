#pragma once
#include "Linked_List.h"


class QueueWithLinkedList
{
    public:

    QueueWithLinkedList (void) {}

    LinkedList queue;

    void PrintQueue (void)
    {
        queue.PrintList();
    }

    void Enqueue (int val)
    {
        queue.InsertAtTheEnd(val);
    }

    void Dequeue (void)
    {
        queue.deleteHead();
    }

    bool isEmpty (void)
    {
        return queue.isEmpty();
    }

    int frontElement (void)
    {
        if(!queue.isEmpty()) return queue.findTheFirstValue();
        return -1;
    }
};