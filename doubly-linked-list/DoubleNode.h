#ifndef DOUBLE_NODE_H
#define DOUBLE_NODE_H

class DoubleNode
{
public:
    DoubleNode(int data);

    int getData() const;
    DoubleNode* getPrev() const;
    DoubleNode* getNext() const;

    void setData(int data);
    void setPrev(DoubleNode* prev);
    void setNext(DoubleNode* next);

private:
    int data;
    DoubleNode* prev;
    DoubleNode* next;
};

#endif