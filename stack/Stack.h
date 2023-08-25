#ifndef STACK_H
#define STACK_H

#include "StackNode.h"

class Stack
{
public:
    Stack();
    Stack(int value);

    StackNode* getTop() const;
    int getHeight() const;
    void setTop(StackNode* stackNode);
    void setHeight(int height);

    void push(int value);
    int pop();

    void printStack() const;

private:
    StackNode* top;
    int height;
};

#endif