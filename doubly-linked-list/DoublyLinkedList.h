#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "Node.h"

class DoublyLinkedList
{
    public:
        DoublyLinkedList();
        DoublyLinkedList(int data);

        Node* getHead() const;
        Node* getTail() const;
        int getLength() const;

        void append(int value);

        void printList() const;

    private:
        Node* head;
        Node* tail;
        int length;
};

#endif