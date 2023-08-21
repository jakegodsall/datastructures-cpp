#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "Node.h"

class DoublyLinkedList
{
    public:
        DoublyLinkedList();
        DoublyLinkedList(int data);

    private:
        Node* head;
        Node* tail;
        Node* length;
};

#endif