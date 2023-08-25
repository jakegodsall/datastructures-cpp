#include <iostream>
#include "Stack.h"

Stack::Stack()
{
    this->top = nullptr;
    this->height = 0;
}

Stack::Stack(int value)
{
    StackNode* newNode = new StackNode(value);
    this->top = newNode;
    this->height = 1;
}

StackNode* Stack::getTop() const
{
    return this->top;
}

int Stack::getHeight() const
{
    return this->height;
}

void Stack::setTop(StackNode* stackNode)
{
    this->top = stackNode;
}

void Stack::setHeight(int height)
{
    this->height = height;
}

void Stack::printStack() const
{
    StackNode* temp = this->top;
    std::cout << "Stack:" << std::endl;
    while (temp != nullptr)
    {
        std::cout << temp->getValue() << std::endl;
        temp = temp->getNext();
    }
}

void Stack::push(int value)
{
    StackNode* newNode = new StackNode(value);
    newNode->setNext(this->top);
    this->top = newNode;
    this->height++;
}