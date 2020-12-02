#pragma once
#include "Linked_List.h" 

class StackWithLinkedList
{
    public:

    LinkedList list;

    StackWithLinkedList (void) {}

    void PrintStack (void)
    {
        list.PrintList();
    }

    void Push (int val)
    {
        list.InsertAtTheEnd(val);
    }

    void Pop (void)
    {
        list.deleteFromTheEnd();
    }

    int Top (void)
    {
        if (!list.isEmpty())
        {
            return list.findTheLastValue();
        }
        return -1;
    }

    bool isEmpty (void)
    {
        return list.isEmpty();
    }
};