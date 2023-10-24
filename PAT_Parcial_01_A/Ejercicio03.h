#pragma once
class MinStack
{
public:
	struct Node
	{
		int num;
		Node* next = nullptr;
	};

	Node* head = nullptr;
	MinStack();

	void push(int value);

	void pop();

	int top();

	int getMin();
};

