#pragma once

class Node
{
	int _value;
	Node* _next;
	Node* _previous;

public:


	explicit Node(int value);
	~Node();

	Node* GetNext() const;
	void SetNext(Node* next);

	Node* GetPrevious() const;
	void SetPrevious(Node* previous);

	int GetValue() const;
};

