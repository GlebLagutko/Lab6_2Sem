#pragma once
#include "Iterator.h"
#include <initializer_list>

class Node;

class CircleList
{
	Node* _start;
public:
	CircleList();

	CircleList(std::initializer_list<int> args);

	CircleList(CircleList&& other);

	CircleList(CircleList& other);

	~CircleList();

	void Add(const int& instance);

	Iterator begin();

	Iterator end();
};
