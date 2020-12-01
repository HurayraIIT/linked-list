#pragma once
#include <iostream>
#include "Node.h"

class CircularLinkedList
{
    public:

    Node *head = 0;
    Node *tail = 0;
    Node *entry = head;

    // TODO: 
    // TODO: 
    // TODO: 
    // TODO: 


    void SortedInsert (int val)
    {
        Node *newNode = new Node(val);

        if (head==0)
        {
            head = newNode;
            tail = newNode;


            return;
        }
        
        if (head==tail)
        {
            if (newNode->data < head->data)
            {
                newNode->next = head;
                head->next = newNode;
                entry = newNode;
            }
            else
            {
                head->next = newNode;
                newNode->next = head;
            }
            return;
        }

        // TODO: insert after 2 already in
        if (newNode->data < entry->data)
        {

        }

    }

    void PrintList (void)
    {
        Node *currentNode = head;

        if (currentNode==0)
        {
            std::cout << "Circular Linked List is Empty.\n";
            return;
        }

        std::cout << "List: (head)";

        while (currentNode->next!=head)
        {
            std::cout << currentNode->data << " -> ";
            currentNode = currentNode->next;
        }
        std::cout << currentNode->data << " -> " << head->data << "(head)\n";
    }

  /*   void PrintList (void)
    {
        Node *currentNode = entry;

        if (currentNode==0)
        {
            std::cout << "Linked List is Empty.\n";
            return;
        }

        std::cout << "List: (head)";

        while (currentNode->next!=entry)
        {
            std::cout << currentNode->data << " -> ";
            currentNode = currentNode->next;
        }
        std::cout << currentNode->data << " -> " << entry->data << "(head)\n";
    } */

};