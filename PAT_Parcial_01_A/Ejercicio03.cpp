#include "Ejercicio03.h"

MinStack::MinStack()
{
}

void MinStack::push(int value)
{
	Node* newNode = new Node;
	newNode->num = value;
	newNode->next = head;
	head = newNode;
}

void MinStack::pop()
{
	if (head != nullptr)
	{
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}

int MinStack::top()
{
	if (head != nullptr)
	{
		return head->num;
	}
	return 0;
}

int MinStack::getMin()
{
	if (head == nullptr)
	{
		return 0; 
	}

	int minVal = head->num;
	Node* current = head;
	while (current != nullptr)
	{
		if (current->num < minVal)
		{
			minVal = current->num;
		}
		current = current->next;
	}

	return minVal;
}
