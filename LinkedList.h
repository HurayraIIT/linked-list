#pragma once

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

    // TODO: Insertion at the head
    // TODO: Insertion at the end
    // TODO: Insertion at given index
    // TODO: Delete from the head
    // TODO: Delete from the end
    // TODO: Delete given value
    // TODO: Delete given index
    // TODO: Find middle element using 1 traversal
    // TODO: Find the maximum element
    // TODO: Find the minimum element


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