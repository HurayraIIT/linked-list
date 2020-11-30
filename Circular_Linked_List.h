#pragma once
#include <iostream>
#include "Node.h"

class CircularLinkedList
{
    public:

    Node *head = 0;

    // TODO: 
    // TODO: 
    // TODO: 
    // TODO: 


    void PrintList (void)
    {
        Node *currentNode = head; 

        if (currentNode==0)
        {
            std::cout << "Linked List is Empty.\n";
            return;
        }

        std::cout << "List: ";

        while (currentNode->next!=head)
        {
            std::cout << currentNode->data << " -> ";
            currentNode = currentNode->next;
        }
        std::cout << currentNode->data << " -> " << head->data << "(head)\n";
    }

};