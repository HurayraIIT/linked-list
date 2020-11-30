#pragma once
#include <iostream>

class Node
{
    public:

    int data;
    Node *next;

    Node (int val)
    {
        data = val;
        next = 0;
    }
};

class LinkedList
{
    public:

    Node *head = 0;

    // TODO: Insertion at given index
    // TODO: Delete from the head
    // TODO: Delete from the end
    // TODO: Delete given value
    // TODO: Delete given index
    // TODO: Find middle element using 1 traversal

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
            std::cout << "Linked List is Empty.\n";
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

};