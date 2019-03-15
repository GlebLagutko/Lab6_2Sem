#pragma once

#include "Node.h"

class Node;

class CircleList;

class Iterator
{
public:

	CircleList* _list;
	Node* _current;
	bool _isEnd;

	Iterator(CircleList* list, Node* current, bool isEnd);

	int operator*() const { return _current->GetValue(); }

	Iterator& operator ++();

	Iterator operator ++(int);

	bool operator ==(const Iterator& other) const;

	bool operator!=(const Iterator &rhs) const;
};

