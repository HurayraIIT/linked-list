#include <iostream>
#include "LinkedList.h"

void TakeInputAndDoStuff (LinkedList *list)
{
    char command[10];
    int value;

    std::cout << "> ";
    std::cin >> command;

    if (command[0]=='p') list->PrintList();
    else if (command[0]=='q') return;
    else if (command[0]=='m' && command[1]=='x') std::cout << "Maximum value: " << list->FindMaxValue() << std::endl;
    else if (command[0]=='m' && command[1]=='n') std::cout << "Minimum value: " << list->FindMinValue() << std::endl;
    else if (command[0]=='m' && command[1]=='d') std::cout << "Middle value: " << list->findMiddleValue() << std::endl;
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
    std::cout << "ih = insert at head; it = insert at tail; ii = insert at index\n";
    std::cout << "p = print linked list; q = quit\nmx = find max value; mn = find min value; md = find mid;\n";

    TakeInputAndDoStuff(list);
    
}

int main()
{
    LinkedList list;

    OperateLinkedList(&list);

    return 0;
}