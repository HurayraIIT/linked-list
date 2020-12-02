#pragma once
#include <iostream>
#include "Linked_List.h"

class StackWithQueues
{
    public:

    QueueWithLinkedList input, output;

    StackWithQueues(void) {}

    void Push (int val)
    {
        input.Enqueue(val);
    }

    void Pop (void)
    {
        // Transfer all data from input to output
        while(!input.isEmpty())
        {
            output.Enqueue(input.frontElement());
            input.Dequeue();
        }

        // dequeue output
        output.Dequeue();

        // return all data from output to input
        while (!output.isEmpty())
        {
            input.Enqueue(output.frontElement());
            output.Dequeue();
        }
    }

    bool isEmpty (void)
    {
        return input.isEmpty();
    }

    void PrintStack (void)
    {
        input.PrintQueue();
    }

};