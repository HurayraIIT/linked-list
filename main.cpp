#include <iostream>
#include "LinkedList.h"

void TakeInputAndDoStuff (LinkedList *list)
{
    char command[10];
    int value;

    std::cin >> command;

    if (command[0]=='p') list->PrintList();
    else if(command[0]=='q') return;
    else if (command[0]=='i')
    {
        std::cin >> value;

        if (command[1]=='h') list->InsertAtTheBeginning(value);
        else if (command[1]=='t') list->InsertAtTheEnd(value);
        else if (command[1]=='i') std::cout << "Coming soon!!\n";
        list->PrintList();
    }

    TakeInputAndDoStuff(list);
}

void OperateLinkedList(LinkedList *list)
{
    std::cout << "ih = insert at head;\nit = insert at tail;\nii = insert at index\n";
    std::cout << "p = print linked list\nq = quit\n";

    TakeInputAndDoStuff(list);
    
}

int main()
{
    LinkedList list;

    OperateLinkedList(&list);

    return 0;
}