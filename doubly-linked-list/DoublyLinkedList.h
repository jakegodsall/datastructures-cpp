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

        // deque operations
        void prepend(int value);
        void deleteFirst();
        void append(int value);
        void deleteLast();

        Node* get(int index) const;
        bool set(int index, int value);
        bool insert(int index, int value);

        void printList() const;

    private:
        Node* head;
        Node* tail;
        int length;
};

#endif