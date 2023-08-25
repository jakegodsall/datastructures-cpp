#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "DoubleNode.h"

class DoublyLinkedList
{
    public:
        DoublyLinkedList();
        DoublyLinkedList(int data);

        DoubleNode* getHead() const;
        DoubleNode* getTail() const;
        int getLength() const;

        // deque operations
        void prepend(int value);
        void deleteFirst();
        void append(int value);
        void deleteLast();

        DoubleNode* get(int index) const;
        bool set(int index, int value);
        bool insert(int index, int value);
        bool deleteNode(int index);

        void printList() const;
        bool isPalindrome() const;

    private:
        DoubleNode* head;
        DoubleNode* tail;
        int length;
};

#endif