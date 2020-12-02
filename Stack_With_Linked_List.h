#pragma once
#include "Linked_List.h" 

class StackWithLinkedList
{
    public:

    LinkedList list;

    void Push (int val)
    {
        list.InsertAtTheEnd(val);
    }

    void Pop (void)
    {
        if (!list.isEmpty())
        {
            list.deleteFromTheEnd();
        }
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