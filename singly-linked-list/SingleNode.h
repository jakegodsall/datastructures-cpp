#ifndef NODE_H
#define NODE_H

class SingleNode
{
public:
	SingleNode(int data);
	void setData(int data);
	void setNext(SingleNode* next);
	int getData() const;
	SingleNode* getNext() const;
private:
	int data;
	SingleNode* next;
};

#endif

