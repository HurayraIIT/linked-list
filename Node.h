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