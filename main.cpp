#include <iostream>
#include "stack/Stack.h"

int main()
{
    Stack* myStack = new Stack(5);
    myStack->push(10);
    myStack->push(15);
    myStack->printStack();

    return 0;
}
