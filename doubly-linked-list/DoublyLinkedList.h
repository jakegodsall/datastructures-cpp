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


        void prepend(int value);
        void append(int value);
        void deleteLast();

        void printList() const;

    private:
        Node* head;
        Node* tail;
        int length;
};

#endif