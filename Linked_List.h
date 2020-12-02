#pragma once
#include <iostream>
#include "Node.h"

class LinkedList : public Node
{
    public:

    Node *head = 0;

    LinkedList (void) { head = 0; }

/**
    * TODO: Insertion at given index
    * TODO: Delete given value
    * TODO: Delete given index
    * TODO: Find the last element 
*/

    int findTheFirstValue (void)
    {
        if (head==0) return -1;
        return head->data;
    }

    int findTheLastValue (void)
    {
        if (head==0) return -1;
        Node *currentNode = head;
        while(currentNode->next!=0)
        {
            currentNode = currentNode->next;
        }
        return currentNode->data;
    }

    void deleteHead (void)
    {
        if (head==0) return;
        head = head->next;
    }

    void deleteFromTheEnd (void)
    {
        Node *node = head;
        if(node==0) return;
        else if(node->next==0)
        {
            head = 0;
        }
        else
        {
            while(node->next->next!=0)
            {
                node = node->next;
            }
            
            node->next = 0;
        }

    }

    int findMiddleValue (void)
    {
        if (head==0) return -1;

        Node *jumper = head;
        Node *walker = head;

        while(true)
        {
            if (jumper->next==0)
            {
                // only one mid value.
                return walker->data;
            }
            else if (jumper->next->next==0)
            {
                // 2 mid values
                // TODO: retrive other mid value
                return walker->data;
            }
            else
            {
                jumper = jumper->next->next; // jump 2 steps
                walker = walker->next; // walk 1 step
            }
        }
    }

    int FindMinValue (void)
    {
        if (head==0)
        {
            std::cout << "List is empty.\n";
            return -1;
        }

        int minValue = 1e8 ;
        
        Node *tempNode = head;
        while(tempNode->next!=0)
        {
            // Using ternary operator to compare
            minValue = (tempNode->data < minValue) ? tempNode->data : minValue ;
            tempNode = tempNode->next;
        }
        minValue = (tempNode->data < minValue) ? tempNode->data : minValue ;

        return minValue;
    }

    int FindMaxValue (void)
    {
        if (head==0)
        {
            std::cout << "List is empty.\n";
            return -1;
        }

        int maxValue = -1 ;
        
        Node *tempNode = head;
        while(tempNode->next!=0)
        {
            // Using ternary operator to compare
            maxValue = (tempNode->data > maxValue) ? tempNode->data : maxValue ;
            tempNode = tempNode->next;
        }
        maxValue = (tempNode->data > maxValue) ? tempNode->data : maxValue ;

        return maxValue;
    }

    void InsertAtTheBeginning (int val)
    {
        // Create a temporary node
        Node *tempNode = new Node(val);

        // Assign tempNode as head
        tempNode->next = head;
        head = tempNode;
    }

    void InsertAtTheEnd (int val)
    {
        // Create a new node
        Node *newNode = new Node(val);

        // If linked list is empty, assign head as the new node
        if (head==0)
        {
            head = newNode;
            return;
        }

        // Create a temporary node for traversal
        Node *currNode = head;

        // Find the last node
        while (currNode->next!=0)
        {
            currNode = currNode->next;
        }

        // Append new node after the last node
        currNode->next = newNode;
    }

    void PrintList (void)
    {
        Node *currentNode = head; // Set head as current node

        // Check if current node is empty
        if (currentNode==0)
        {
            std::cout << "List is Empty.\n";
            return;
        }

        // Start printing the linked list
        std::cout << "List: ";

        // Keep printing each node untill current node is the last node 
        while (currentNode->next!=0)
        {
            std::cout << currentNode->data << " -> ";
            currentNode = currentNode->next;
        }
        // Print the last node
        std::cout << currentNode->data << " -> \n";
    }

    bool isEmpty (void)
    {
        if (head==0) return true;
        return false;
    }

};