#ifndef NODE_H
#define NODE_H

class Node
{
    public:
        Node(int data);

    private:
        int data;
        Node* prev;
        Node* next;
}

#endif