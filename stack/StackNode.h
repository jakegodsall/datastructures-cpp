#ifndef STACK_NODE_H
#define STACK_NODE_H

class StackNode
{
public:
    StackNode(int value);

    int getValue() const;
    StackNode* getNext() const;

    void setValue(int value);
    void setNext(StackNode* next);

private:
    int value;
    StackNode* next;
};

#endif