#include <iostream>
#include "LinkedList.h"

int main()
{
	LinkedList* myLinkedList = new LinkedList(4);

	myLinkedList->append(5);
	myLinkedList->append(10);

	myLinkedList->printInfo();

	myLinkedList->insert(1, 100);
	myLinkedList->insert(1, 125);

	myLinkedList->printInfo();

	return 0;
}