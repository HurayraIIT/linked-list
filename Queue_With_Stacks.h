#pragma once
#include <iostream>
#include "Stack_With_Linked_List.h"


/**
 * TODO: Front operation (return the data from Front of the Queue)
 * TODO: Print The Queue
 */


class QueueWithStacks
{
    public:

    StackWithLinkedList input, output;

    QueueWithStacks (void) {}

    void Enqueue (int val)
    {
        input.Push(val);
    }

    void Dequeue (void)
    {
        // Step 1: Transfer all data from input stack to output stack
        while (!input.isEmpty())
        {
            output.Push(input.Top());
            input.Pop();
        }
        
        // Step2: Pop the Top element from output stack
        output.Pop();

        // Step 3: Transfer all data from output stack to input stack
        while (!output.isEmpty())
        {
            input.Push(output.Top());
            output.Pop();
        }
    }

    int PrintQueue (void)
    {
        input.PrintStack();
    }
    
};