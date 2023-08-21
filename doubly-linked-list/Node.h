#ifndef NODE_H
#define NODE_H

class Node
{
    public:
        Node(int data);

        int getData() const;
        Node* getPrev() const;
        Node* getNext() const;

        void setData(int data);
        void setPrev(Node* prev);
        void setNext(Node* next);

    private:
        int data;
        Node* prev;
        Node* next;
};

#endif