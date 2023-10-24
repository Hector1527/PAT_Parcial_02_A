#include "Ejercicio01.h"

Node<char>* Ejercicio01::remove(Node<char>* head, char value)
{
	Node<char>* prev = nullptr;
	Node<char>* temp = head;

	if (head == nullptr)
		return nullptr;

	while (temp != nullptr)
	{
		if (temp->value == value)
		{
			if (prev == nullptr)
			{
				head = temp->next;
				delete temp; 
				temp = head;
			}
			else
			{
				prev->next = temp->next;
				delete temp;
				temp = prev->next;
			}
		}
		else
		{
			prev = temp;
			temp = temp->next;
		}
	}
	return head;
}

