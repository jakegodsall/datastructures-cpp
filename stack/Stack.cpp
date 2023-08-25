#include <iostream>
#include "Stack.h"

// Default constructor: Initializes an empty stack.
Stack::Stack()
{
    this->top = nullptr;
    this->height = 0;
}

// Constructor: Initializes the stack with a single node.
Stack::Stack(int value)
{
    StackNode* newNode = new StackNode(value);
    this->top = newNode;
    this->height = 1;
}

// Returns the top node of the stack.
StackNode* Stack::getTop() const
{
    return this->top;
}

// Returns the height (number of nodes) in the stack.
int Stack::getHeight() const
{
    return this->height;
}

// Sets the top node of the stack.
void Stack::setTop(StackNode* stackNode)
{
    this->top = stackNode;
}

// Sets the height (number of nodes) of the stack.
void Stack::setHeight(int height)
{
    this->height = height;
}

// Prints the values of the nodes in the stack from top to bottom.
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

// Adds a new node with the specified value to the top of the stack.
void Stack::push(int value)
{
    StackNode* newNode = new StackNode(value); // Create the new node.
    newNode->setNext(this->top); // Set the new node to point to the node currently at the top of the stack.
    this->top = newNode; // Set the top pointer to point to the new node.
    this->height++; // Increase the height of the stack by 1.
}
