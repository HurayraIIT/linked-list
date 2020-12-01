#include <iostream>
#include "Linked_List.h"
#include "Linked_List_UI.h"
#include "Circular_Linked_List.h"


int main()
{
/*  LinkedList list;
    OperateLinkedList(&list); */

    CircularLinkedList list;
    list.SortedInsert(12);
    list.SortedInsert(10);
    list.SortedInsert(11);
    list.PrintList();

    return 0;
}